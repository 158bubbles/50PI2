int lookupAB (ABin root, int x) {
    
    while(root != NULL){
        if(root->valor == x){
            return 1;
        }
        else if(x < root->valor){
            root = root->esq;
        }
        else if(x > root->valor){
            root = root->dir;
        }
    }
    
    return 0;
}
