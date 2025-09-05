SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {

    if (position == 0){
        SinglyLinkedListNode* aux = llist->next;
        free(llist);
        return aux;
    }

    SinglyLinkedListNode* node_ptr = llist;

    for (int i = 0; i < (position-1); i++){
        node_ptr = node_ptr->next;
    }

    SinglyLinkedListNode* aux = node_ptr->next;
    node_ptr->next = (node_ptr->next)->next;
    free(aux);

    return llist;
}