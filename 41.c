ABin somasAcA (ABin root) {
    
    if(root == NULL){
        return NULL;
    }
    
    ABin novaRoot = (ABin) malloc(sizeof(ABin));  //nova arvore que vai ser a final retornada
    ABin novaEsq = somasAcA(root->esq);   //as acumuladas da esq
    ABin novaDir = somasAcA(root->dir);    //as acumuladas da dir
    
    novaRoot->esq = novaEsq;      //ligamos a nova arvore à sua nova esq e nova direita
    novaRoot->dir = novaDir;
    
    int somaEsq;    //somasAcA da parte esquerda e parte direita
    int somaDir;
    
    if(novaEsq != NULL){
        somaEsq = novaEsq->valor;
    }
    else {
        somaEsq = 0;
    }
    
    if(novaDir != NULL){
        somaDir = novaDir->valor;
    }
    else {
        somaDir = 0;
    }
    
    
    //como fica cada soma acumulada
    novaRoot->valor = somaEsq + somaDir + root->valor;
    
    return novaRoot;
}
