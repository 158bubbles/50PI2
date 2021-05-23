int freeAB (ABin root) {
    
    if(root == NULL){
        return 0;
    } else {
        
        ABin esq = root->esq;
        ABin dir = root->dir;
        free(root);
    }
 
    return 1 + freeAB(root->esq) + freeAB(root->dir);
}
