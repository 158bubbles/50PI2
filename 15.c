void concatL (LInt *head, LInt b){
    
    LInt current = *head;
    
    //se a lista head nao tiver nenhum elemento
    if(*head == NULL){
        *head = b;
        return;
    }
    
    //se a lista head tiver mais que um elemento, corre a lista ate chegar ao fim
    while(current->prox != NULL){
        current = current->prox;
    }
    
    current->prox = b;   //e acrescenta no fim da lista a lista b
}
