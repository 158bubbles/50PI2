LInt somasAcL (LInt head) {
    
    LInt current = head;
    
    //se nao houver lista
    if(head == NULL){
        return NULL;
    }
    
    //se houver lista
    int soma = current->valor;        //valor de cada soma para meter na nova lista/ o primeiro nodo é o primeiro valor da head
    LInt nova = newLInt(soma,NULL);    //nova lista com os valores das somas
    LInt currentNova = nova;          //apontador da nova lista
    
    while(current != NULL){
        current = current->prox;    //avança ja pq ja temos o primeiro nodo na nova lista
        
        if(current != NULL){
            soma += current->valor;
            currentNova->prox = newLInt(soma, NULL);    //o proximo valor da nova lista é cada recente valor da soma
            currentNova = currentNova->prox;
        }
    }
    
    return nova;
}
