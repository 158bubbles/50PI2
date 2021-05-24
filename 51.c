int maxValue (ABin root){
    
    if(root->dir == NULL){
        return root->valor;
    }
    else {
        maxValue(root->dir);
    }
} 
 
 
 
int minValue (ABin root){
    
    if(root->esq == NULL){
        return root->valor;
    }
    else {
        minValue(root->esq);
    }
} 
 
 
int deProcura (ABin root) {
    
    //se for nula, é
    if(root == NULL){
        return 1;
    }
    
    //se o maior da esq for maior q a raiz, nao é
    if(root->esq != NULL && maxValue(root->esq) > root->valor){
        return 0;
    }
    
    
    //se o menor da dir for menor que a raiz, nao é
    else if(root->dir != NULL && minValue(root->dir) < root->valor){
        return 0;
    }
    
    
    //se nao for de procura num lado ou noutro
    else if(deProcura(root->dir) == 0 || deProcura(root->esq) == 0){
        return 0;
    }
    
    
    return 1;
}
