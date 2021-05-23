int listToArray (LInt head, int v[], int N){
    
    LInt current = head;
    int i;
    
    for(i=0; i < N && current != NULL; i++){
        v[i] = current->valor;
        current = current->prox;
    }
    
    return i;
}
