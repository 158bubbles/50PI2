LInt cloneRev (LInt head){
    
    //se nao tiver elementos
    if(head == NULL){
        return NULL;
    }
    
    //se tiver elementos
    LInt current = head;
    LInt novo = NULL;    //no inverso, essa lista vai começar num NULL pq numa lista normal isso seria no fim
    
    while(current != NULL){
        novo = newLInt(current->valor, novo);  //a função LInt vai adicionando sempre os nodos no inicio
        current = current->prox;        //vai avançando no current p dar os seus valores p função LInt
    }
    
    return novo;
}
