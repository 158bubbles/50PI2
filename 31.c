void acrescenta(int x, LInt *head){
    
    LInt current = *head;
    LInt novo = newLInt(x, NULL);  //temos de criar este nodo com o x p o acrescentar
    
    if(*head == NULL){     //se nao tiver nada ainda da parte esq da arvore
        *head = novo;
        return;
    }
    
    while(current->prox != NULL){
        current = current->prox;
    }
    
    //quando chegarmos ao ultimo elemento da head acrescentamos a root
    current->prox = novo;
    
}

void inorder (ABin root, LInt *head) {  //inorder é: esq root dir
    
    if(root != NULL){
        
        inorder(root->esq, head);
        acrescenta(root->valor, head);
        inorder(root->dir, head);
    }
    
}
