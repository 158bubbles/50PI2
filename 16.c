LInt cloneL(LInt head){
    
    //se a lista estiver vazia
    if(head == NULL){
        return NULL;
    }
  
    //caso tenha elementos
    LInt novo = newLInt(head->valor, NULL);   //criamos um nodo com a head que vai ser o primeiro da nova lista
    LInt current = head;       //vai correr a lista head
    LInt currentNovo = novo;       //vai correr a nova lista
  
    while(current != NULL){
        current = current->prox;     //pq o primeiro nodo da head ja esta na lista nova
      
        if(current != NULL){
            currentNovo->prox = newLInt(current->valor, NULL);
            currentNovo = currentNovo->prox;
        }
    }
    return novo;
}  
