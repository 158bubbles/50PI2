int length (LInt l){
    
    int i, count;
    for(i=0; l!=0; i++) {
        l=l->prox;
        count++;
    }    
    return i;
}
