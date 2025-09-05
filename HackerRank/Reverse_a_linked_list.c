SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {

    SinglyLinkedListNode* atual = llist->next;
    SinglyLinkedListNode* anterior = llist;
    SinglyLinkedListNode* prox;

    llist->next = NULL;

    if (atual == NULL){
        return llist;
    }

    prox = atual->next;
    atual->next = anterior;

    while (prox != NULL){

        anterior = atual;
        atual = prox;

        prox = atual->next;
        atual->next = anterior;
    }

    return atual;
}