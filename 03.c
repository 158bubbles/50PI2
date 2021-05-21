void imprimeL (LInt l){
    
    while (l!=NULL){
   
        printf("%d\n", l=l->valor);
        l=l->prox;
    }
}
