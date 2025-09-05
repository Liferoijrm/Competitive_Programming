#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBS:  QUANDO ESTIVER TRABALHANDO COM LISTAS QUE NÃO TEM UMA ESTRUTURA DE CONTROLE (APENAS STRUCT NODE), VERIFIQUE FUNÇÕES NAS QUAIS A 
PASSAGEM DE PARAMETROS DEVE SER REALIZADA POR REFERÊNCIA (PONTEIRO DE PONTEIRO OU NODE**) */

/* OBS:  ÀS VEZES A IMPLEMENTAÇÃO DE LISTAS E FILAS ESTÁTICAS É MELHOR DO QUE A IMPLEMENTAÇÃO DINÂMICA. A ALOCAÇÃO PODE SER DINÂMICA (EX: CRIAR
UM ARRAY COM MALLOC INT* LISTA = (INT*) MALLOC(N * SIZEOF(INT));), MAS SUA UTILIZAÇÃO CONTINUARÁ SENDO IGUAL ANTES.*/

typedef struct node{
    char nome[20];
    float valor;
    struct node* next;
} node;

typedef struct List{
    int tamanho;
    node* next;
} List;

List* create_list(){

    List* lista = (List*) malloc(sizeof(List));
    lista->tamanho = 0;
    lista->next = NULL;
    return lista;
}

void create_list2(List** end_lista){ // "end_lista" nessa função é um endereço do ponteiro "lista" passado na main (ponteiro para ponteiro é o endereço do ponteiro)

    *end_lista = (List*) malloc(sizeof(List)); // aqui desrreferencia-se "end_lista" com "*end_lista" para acessar o ponteiro "lista" em si (ponteiro lista = endereço do bloco de memoria alocado na heap)
    (*end_lista)->tamanho = 0; // o uso de "(*end_lista)" desrreferencia end_lista e obtem "lista". Depois, -> desrreferencia "lista" e obtem acesso ao conteudo de lista.
    (*end_lista)->next = NULL;
}

int list_is_empty(List* lista){
    if (lista->tamanho == 0) return 1;
    else return 0;
}

void add_elem(List* lista, char nome[], float val){

    node* no = (node*) malloc(sizeof(node));

    strcpy(no->nome, nome);
    no->valor = val;
    no->next = lista->next;

    lista->next = no;
    lista->tamanho++;
}

int remove_elem(List* lista){

    if (list_is_empty(lista)){
        return 1;
    }

    node* aux = lista->next;
    lista->next = (lista->next)->next;
    free(aux);

    lista->tamanho--;

    return 0;
}

void add_elem_end(List* lista, char nome[], float val){

    if (list_is_empty(lista)){
        add_elem(lista, nome, val);
        lista->tamanho++;
        return;
    }

    node* no = (node*) malloc(sizeof(node));

    strcpy(no->nome, nome);
    no->valor = val;
    no->next = NULL;

    node* node_ptr = lista->next;

    while((node_ptr->next) != NULL){
        node_ptr = node_ptr->next;
    }

    node_ptr->next = no;
    lista->tamanho++;
}

int remove_elem_end(List* lista){
    
    if (list_is_empty(lista)){
        return 1;
    }
    if ((lista->tamanho) == 1){
        remove_elem(lista);
        lista->tamanho--;
        return 0;
    }

    node* node_ptr = lista->next;

    for (int i = 0; i < ((lista->tamanho)-2); i++){
        node_ptr = node_ptr->next;
    }

    node* aux = node_ptr->next;
    node_ptr->next = NULL;
    free(aux);

    lista->tamanho--;

    return 0;
}

int add_elem_pos(List* lista, char nome[], float val, int pos){
    if (pos < 0 || pos > lista->tamanho){
        return 1;
    }
    if (pos == 0){
        add_elem(lista, nome, val);
        lista->tamanho++;
        return 0;
    }

    node* no = (node*) malloc(sizeof(node));

    strcpy(no->nome, nome);
    no->valor = val;
    no->next = NULL;

    node* node_ptr = lista->next;

    for (int i = 0; i < (pos-1); i++){
        node_ptr = node_ptr->next;
    }

    node* aux = node_ptr->next;
    node_ptr->next = no;
    no->next = aux;

    lista->tamanho++;

    return 0;
}

int remove_elem_pos(List* lista, int pos){

    if (pos >= lista->tamanho || pos < 0){
        return 1;
    }

    node* node_ptr = lista->next;

    if (pos == 0){
        lista->next = node_ptr->next;
        free(node_ptr);
        lista->tamanho--;
        return 0;
    }
    
    for (int i = 0; i < (pos-1); i++){
        node_ptr = node_ptr->next;
    }

    node* aux = node_ptr->next;
    node_ptr->next = (node_ptr->next)->next;
    free(aux);
    
    lista->tamanho--;

    return 0;
}

int add_elem_sort(List* lista, char nome[], float val){ // pressupõe que a linked list esteja ordenada por preço
    if (list_is_empty(lista)){
        add_elem(lista, nome, val);
        lista->tamanho++;
        return 0;
    }

    node* no = (node*) malloc(sizeof(node));

    strcpy(no->nome, nome);
    no->valor = val;
    no->next = NULL;

    node* node_ptr = lista->next;

    if (val < node_ptr->valor){
        add_elem(lista, nome, val);
        lista->tamanho++;
        return 0;
    }

    int pos = 1;

    while(node_ptr != NULL && node_ptr->next != NULL){
        if (val >= node_ptr->valor && val <= (node_ptr->next)->valor){
            add_elem_pos(lista, nome, val, pos);
            lista->tamanho++;
            return 0;
        }
        else{
            pos++;
            node_ptr = node_ptr->next;
        }
    }

    add_elem_end(lista, nome, val);

    lista->tamanho++;

    return 0;
}

void dealocate_list(List* lista){ // OBS: só esvazia a lista, mas teria que haver um "free(lista)" para evitar problemas de alocação

    if (lista == NULL) {
        return;  // Lista não foi inicializada ou já foi desalocada
    }

    node* node_ptr = lista->next;

    while(node_ptr != NULL){
        node* aux = node_ptr;
        node_ptr = node_ptr->next;
        free(aux);
    }

    lista->next = NULL;
    lista->tamanho = 0;
}

int linear_search(List* lista, char nome[]){ // busca por itens de mesmo nome
    if (list_is_empty(lista)){
        return 0;
    }

    node* node_ptr = lista->next;

    while(node_ptr != NULL){
        if (strcmp(node_ptr->nome, nome) == 0){
            return 1;
        }
        node_ptr = node_ptr->next;
    }

    return 0;
}

node* pop(List* lista, int pos){

    if (pos >= lista->tamanho || pos < 0){
        return NULL;
    }

    node* node_ptr = lista->next;

    if (pos == 0){
        lista->next = node_ptr->next;
        node_ptr->next = NULL;
        lista->tamanho--;
        return node_ptr;
    }
    
    for (int i = 0; i < (pos-1); i++){
        node_ptr = node_ptr->next;
    }

    node* aux = node_ptr->next;
    node_ptr->next = (node_ptr->next)->next;
    
    lista->tamanho--;

    aux->next = NULL;
    return aux;
}

void print_lista(List* lista){
    node* node_ptr = lista->next;

    if (node_ptr == NULL){
        printf("A lista esta vazia\n");
    }
    else {
        while (node_ptr != NULL){
            printf("%s %.2f, ", node_ptr->nome, node_ptr->valor);
            node_ptr = node_ptr->next;
        }
        printf("\n");
    }
}

int main(){ // a main aqui terá o objetivo de demonstrar cada uma das implementações

    List* lista = NULL;
    char nome[20];
    float valor;
    int vezes;

    lista = create_list();

    printf("Insira elementos na lista com nome e preco, digite um preco maior que 0:\n\n");

    scanf("%s %f", nome, &valor);

    while(valor > 0){
        add_elem(lista, nome, valor);
        scanf("%s %f", nome, &valor);
    }

    printf("\nEssa eh sua lista final:\n\n");
    print_lista(lista);

    printf("\nRemova quantos elementos do inicio da lista?:\n\n");

    scanf("%d", &vezes);
    for (int i = 0; i < vezes; i++){
        remove_elem(lista);
    }

    printf("\nEssa eh sua lista final:\n\n");
    print_lista(lista);

    printf("\nRemova quantos elementos do final da lista?:\n\n");

    scanf("%d", &vezes);
    for (int i = 0; i < vezes; i++){
        remove_elem_end(lista);
    }

    printf("\nEssa eh sua lista final:\n\n");
    print_lista(lista);

    printf("\nDe qual posicao tira um elemento?:\n\n");

    scanf("%d", &vezes);
    remove_elem_pos(lista, vezes);

    printf("\nEssa eh sua lista final:\n\n");
    print_lista(lista);

    printf("\nEm qual posicao coloca um elemento com nome uva e valor 5.0?:\n\n");

    scanf("%d", &vezes);
    strcpy(nome, "uva");
    add_elem_pos(lista, nome, 5.0, vezes);

    printf("\nEssa eh sua lista final:\n\n");
    print_lista(lista);

    printf("\nDe qual posicao tira um elemento? (pop):\n\n");

    scanf("%d", &vezes);
    node* aux = pop(lista, vezes);

    printf("\nEssa eh sua lista final:\n\n");
    print_lista(lista);
    printf("\nelemento removido: %s %.2f\n\n", aux->nome, aux->valor);

    printf("\nQual elemento quer buscar por nome?:\n\n");

    scanf("%s", nome);

    printf("\nelemento encontrado?: %d\n\n", linear_search(lista, nome));

    printf("\nQual elemento quer buscar por nome?:\n\n");

    scanf("%s", nome);

    printf("\nelemento encontrado?: %d\n\n", linear_search(lista, nome));

    printf("\nlista dealocada:\n\n");
    dealocate_list(lista); // OBS: só esvazia a lista, mas teria que haver um "free(lista)" para evitar problemas de alocação

    printf("\nEssa eh sua lista final:\n\n");
    print_lista(lista);

    return 0;
}

// OBS (boas práticas): inicialize ponteiros com NULL, dê free() e faça verificação de funcionamento para as funções malloc. Além disso, há 2 funções que não foram testadas (create_list2 e add_elem_sort)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                          ////////
//           SESSÃO DE CÓDIGOS EXEMPLO                                                                      ////////
//                                                                                                          ////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

IMPLEMENTAÇÃO DE FILA ESTÁTICA (VETOR)

#include <stdio.h>
#include <stdlib.h>

void print_format(int result, int* first) {
    if (*first != 0) {
        printf(" %d", result);
    } else {
        printf("%d", result);
        *first = 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int idx = 0; idx < n; idx++) {
        int num, x, result;
        scanf("%d", &num);

        int* lista = (int*) malloc(num * sizeof(int));

        for (int i = 0; i < num; i++) {
            scanf("%d", &lista[i]);
        }

        int first = 0;

        for (int i = 0; i < num; i++) {
            scanf("%d", &x);

            result = x - lista[i];

            print_format(result, &first);

            if ((i+1) == num){
                break;
            }

            if (lista[i+1] < x){
                lista[i+1] = x;
            }
        }

        free(lista);

        printf("\n");
    }

    return 0;
}

IMPLEMENTAÇÃO DE FILA ENCADEADA (LINKED QUEUE)

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node* next;
}node;

void add_elem(node** lista, int x){

    if (*lista == NULL){

        *lista = (node*) malloc(sizeof(node));

        (*lista)->x = x;
        (*lista)->next = NULL;

        return;
    }

    node* no = (node*) malloc(sizeof(node));
    no->x = x;
    no->next = NULL;

    node* node_ptr = *lista;

    while(node_ptr->next != NULL){
        node_ptr = node_ptr->next;
    }

    node_ptr->next = no;
}

void remove_elem(node** lista){
    node* aux = *lista;
    *lista = (*lista)->next;
    free(aux);
}

void print_format(int result, int* first){
    if (*first != 0){
        printf(" %d", result);
    }
    else{
        printf("%d", result);
        *first = 1;
    }
}

int main(){

    int n;

    scanf("%d", &n);

    for(int idx = 0; idx < n; idx++){

        int num, x, result;
        node* lista = NULL;

        scanf("%d", &num);

        for(int i = 0; i < num; i++){
            scanf("%d", &x);
            add_elem(&lista, x);
        }

        int first = 0;

        for(int i = 0; i < num; i++){
            scanf("%d", &x);

            result = x - lista->x;

            print_format(result, &first);

            remove_elem(&lista);

            if (lista == NULL){
                break;
            }

            if (lista->x < x){
                lista->x = x;
            }
        }
        
        printf("\n");
    }

    return 0;
}

IMPLEMENTAÇÃO CLÁSSICA DE LISTA ENCADEADA

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char letra;
    struct node* next;
}node;

node* cria_lista(){

    node* lista = (node*) malloc(sizeof(node));

    lista->letra = '\0';
    lista->next = NULL;

    return lista;
}

int is_solved(node* lista, char letra){

    node* node_ptr = lista->next;

    while(node_ptr != NULL){
        if (letra == node_ptr->letra){
            return 1;
        }
        node_ptr = node_ptr->next;
    }

    return 0;
}

void add_elem(node* lista, char letra){

    node* no = (node*) malloc(sizeof(node));

    no->letra = letra;
    no->next = lista->next;
    
    lista->next = no;
}

int main(){

    int n;

    scanf("%d", &n);

    for(int idx = 0; idx < n; idx++){

        int size, ballons = 0;
        char string[51];
        node* lista = cria_lista();

        scanf("%d", &size);
        scanf("%s", string);

        for(int i = 0; i < size; i++){
            if (is_solved(lista, string[i])){
                ballons++;
            }
            else{
                ballons+=2;
                add_elem(lista, string[i]);
            }
        }

        printf("%d\n", ballons);
    }

    return 0;
}

*/