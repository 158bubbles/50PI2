int depthOrd (ABin root, int x) {
    
    if(root == NULL){
        return -1;
    }
    
    int i;
    for(i=1; root != NULL; i++){  //fazemos um ciclo for para ir percorrendo os niveis da arvore
        
        if(x == root->valor){  //sempre que encontrar o valor de x, retorna o nievl i
            return i;
        }
        else if(x < root->valor){
            root = root->esq;
        }
        else {
            root = root->dir;
        }
    }
    return -1;

}
