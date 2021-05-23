int nivelV (ABin root, int n, int v[]) {
    
    if(root == NULL){
        return 0;
    }
    
    if(n == 1){
        v[0] = root->valor;
        return 1;    //so preenche 1 posiçao no nivel 1
    }
    else {
        //acrescentamos os nodos da esq ao vetor, por isso os da direita vao começar a ser metidos a partir da posição pos (v+pos)
        int pos = nivelV(root->esq, n-1, v); 
        
        return (pos + nivelV(root->dir, n-1, v+pos));
    }
}
