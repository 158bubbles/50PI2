void remreps (LInt head){
    
    
    //se a head for vazia
    if(head == NULL){
        return;
    }
    
    //se a head so tiver um elemento
    if(head->prox == NULL){
        return;
    }
    
    //se nao for vazia
    LInt current = head->prox;
    LInt temporario = head;
    
    while(current != NULL){
        if(temporario->valor == current->valor){  //pq como  lista head está ordenada, se houverem repetidos, sao sucessivos
            temporario->prox = current->prox;
            free(current);
            current = temporario->prox;
            
        } else {
            temporario = current;
            current = current->prox;
            
        }
    }
}
