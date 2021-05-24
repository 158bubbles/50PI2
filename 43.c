ABin cloneMirror (ABin root) {
    
    ABin nova = NULL;   //temos de declarar a nova arvore antes de entrar no if
    if(root != NULL){
        nova = (ABin) malloc(sizeof(struct nodo));
        
        nova->valor = root->valor;
        nova->esq = cloneMirror(root->dir);
        nova->dir = cloneMirror(root->esq);
    }
    
    return nova;
}
