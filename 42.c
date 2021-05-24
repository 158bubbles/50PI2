int contaFolhas (ABin root) {
    
    if(root == NULL){
        return 0;
    }
    
    if(root->esq == NULL && root->dir == NULL){     //para uma so nodo, testamos se é folha
        return 1;
    }
    else {    //para a arvore toda
        return (contaFolhas(root->esq) + contaFolhas(root->dir));
    }

}
