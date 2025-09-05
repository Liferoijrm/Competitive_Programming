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