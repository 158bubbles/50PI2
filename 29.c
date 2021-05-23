ABin cloneAB (ABin root){
    
    Abin nova = NULL;   //criamos uma nova arvore para meter os clones
    
    if(root != NULL){
        nova = (ABin) malloc(sizeof(struct(nodo)));
        
        nova->valor = root->valor;     //o primeiro novo vai ser o da root
        nova->esq = cloneAB(root->esq);   //depois completamos com os nodos da esq e dir recursivamente
        nova->dir = cloneAB(root->dir);
    }
    
    return nova;
}
