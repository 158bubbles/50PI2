int maiorAB (ABin root) {
    
    //numa arvore, o maior elemento é sempre o mais à direita
    //por isso entramos num ciclo que percorre a arvore para a direita ate chegar ao fim
    while(root->dir != NULL){
        root = root->dir;
    }
    
    return root->valor;
}
