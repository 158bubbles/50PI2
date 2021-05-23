int freeAB (ABin root) {
    
    if(root == NULL){
        return 0;
    } else {
        
        ABin esq = root->esq;    //temos que guardar os apontadores antes de libertar o espaço
        ABin dir = root->dir;
        free(root);           //libertamos o espaço da arvore
    }
 
    return 1 + freeAB(root->esq) + freeAB(root->dir);
}
