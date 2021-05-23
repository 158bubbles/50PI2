int altura (ABin root){
    
    if(root == NULL){
        return 0;
    }
    
    int alturaEsq = altura(root->esq);
    int alturaDir = altura(root->dir);
    
    if(alturaEsq > alturaDir){
        return alturaEsq + 1;     //+1 pq tbm conta a raiz
    } else {
        return alturaDir + 1;
    }

}
