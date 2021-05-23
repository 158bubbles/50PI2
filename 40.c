int dumpAbin (ABin root, int v[], int N) {
    
    if(root == NULL){
        return 0;
    }
    
    if(N == 0){
        return 0;
    }
    else {
        int pos = dumpABin(root->esq, v, N);    //começamos a preencher com os nodos da esq
        
        if(pos < N){   //so continua a preencher se o N nao estiver a 0 (NAO HAVER MAIS LUGARES)
            v[pos] = root->valor;   //acrescenta a raiz na posiçao pos 
            
            return (pos + 1 + dumpABin(root->dir, v + pos + 1, N-pos-1));
            
        }
        return N;   //se n entrou no if, retorna apenas o N
    }
}
