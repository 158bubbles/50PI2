LInt parteAmeio (LInt *head){
    
    LInt inicio = *head;    //está sempre a apontar p inicio da lista head
    LInt current = *head;    //o current percorre a lista head
    int l = length(current);
    
    if(l == 1) return NULL;
    
    int meio = l/2, i;
    for(i=0; i+1 < meio; i++){
        current = current->prox;     //quando sai do ciclo, o current fica no fim da primeira lista 
    }
    
    *head = current->prox;     //o head para a apontar para o inicio da segunda lista
    current->prox = NULL;
    
    return inicio;
}
