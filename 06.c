int removeOneOrd (LInt *head, int x){
    
    LInt current = *head, temporario;
    
    if(current==NULL) return 1;
    else if(current->prox == NULL && current->valor == x){  //se o q queremos remover é o único elemento presente na lista
        free(*head);        //eliminamos a lista toda composta apenas por esse elemento
        *head = NULL;     //e a lista fica nula
        return 0;
    }
    
    while(current!=NULL){
        if(current->valor == x){
            temporario->prox = current->prox;  //passamos o temporario p o elemento a seguir do current antes de eliminar o current
            free(current);
            return 0;
        }
        
        temporario = current;       //alinhamos os dois
        current = current->prox;    //e segue p proximo
    }
    return 1;
}
