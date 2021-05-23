void nivel(ABin root, int n, LInt *tail){
    
    if(root == NULL){
        return;
    }
    
    if(n == 1){   //para o primeiro e unico nodo do nivel 1
        LInt head = malloc(sizeof(struct lligada)); 
        head->valor = root->valor;
        head->prox = *tail;
        *tail = head;
    }
    else {
        nivel(root->dir, n-1, tail);
        nivel(root->esq, n-1, tail);
    }
    
    
}



LInt nivelL (ABin root, int n) {
    
    LInt lista = NULL;    //cria se a lista a ser retornada
    nivel(root, n, &lista);    //completamos a lista com os nodos da arvore
    
    return lista;

}
