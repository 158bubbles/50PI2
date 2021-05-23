LInt parte (LInt head){
    
    if (head==NULL || head->prox==NULL) return NULL;
    
    int i;
    LInt current = head;
    
    LInt pares = newLInt(0, NULL);    //criamos um nodo falso que vai ser removido no fim, mas serve para iniciar uma nova lista p os pares e impares
    LInt impares = newLInt(0, NULL);
    
    LInt currPares = pares;      //os apontadores de ambas as listas pares e impares
    LInt currImpares = impares;
    
    for(i=1; current != NULL;i++){
        if(i%2 == 0){
            pares->prox = current;
            pares = pares->prox;
            current = current->prox;
            impares->prox = NULL;
        } else {
            impares->prox = current;
            impares = impares->prox;
            current = current->prox;
            pares->prox = NULL;
        }
    }
    
    LInt removido = pares;       //guarda o elemento a ser removido
    pares = pares->prox;
    free(removido);
    
    removido = impares;
    impares = impares->prox;
    free(removido);
    
    
    return pares;   //devolve a lista dos pares ja sem o primeiro nodo que criamos
}
