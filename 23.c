LInt arrayToList (int v[], int N){
    
    //se o array for vazio, nao dá lista nenhuma
    if(N == 0){
        return NULL;
    }
    
    //se houver array nao vazio
    LInt head = newLInt(v[0], NULL);   //criamos um primeiro nodo com o primeiro do array
    LInt current = head;
    
    int i;
    for(i=1; i < N; i++){
        current->prox = newLInt(v[i], NULL);
        current = current->prox;
    }
    
    return head;
}
