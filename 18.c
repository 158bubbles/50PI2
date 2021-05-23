int maximo (LInt head){
    
    LInt current = head;
    int max = current->valor;
    
    while(current != NULL){
        if(current->valor > max){
            max = current->valor;
        }
        current = current->prox;
    }
    
    return max;
}
