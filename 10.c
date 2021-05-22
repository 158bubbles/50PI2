int removeAll (LInt *head, int x){
    
    int count=0;      //conta o numero de x removidos da lista
    
    //se o x a ser removido for o primeiro elemento da lista
    while(*head != NULL){
        if((*head)->valor == x){
            (*head) = (*head)->prox;  //o inicio da lista passa para ao proximo elemento
            count++;
        } else {
            break;
        }    
    }
    
    if(*head == NULL){   //se nao houver lista
        return count;    // que é 0 pois foi inicializado a 0
    }
    
    
    //se o x a ser removido for qualquer elemento da lista
    LInt current = *head;   //percorre a lista
    LInt temporario;        //sempre um indice atras do current
    
    while(current != NULL){
        if(current->valor == x){
            current = current->prox;    //o current avança
            temporario->prox = current;
            count++;
        } else {
            temporario = current;       //o temporario fica c a posição do current
            current = current->prox;     //e o current avança, mantendo assim o facto do temporario estar a 1 nodo do current
            
        }
    }
    
    
    return count;
}
