void appendL (LInt *head, int x){
    
    LInt current = *head;
    LInt novo = newLInt(x, NULL);   //criamos um novo nodo com o x que queremos inserir
    
    //se a lista estiver vazia
    if((*head) == NULL){
        *head = novo;
        return;
    }
    
    while(current->prox != NULL){  //loop para correr a lista ate chegar ao fim
        current = current->prox;
    }
    
    current->prox = novo;
}
