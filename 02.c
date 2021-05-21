void freeL(LInt l){
    
    LInt aux;
  
    while(l != NULL){
      aux = l;
      l=l->prox;
      free(aux);
    }  
  
