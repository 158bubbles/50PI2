int depth (ABin root, int x) {
    
    //caso nao haja elementos na arvore
    if(root == NULL){
        return -1;
    }
    
    //caso encontre o x que procura na arvore
    if(root->valor == x){
        return 1;
    }
    
    int depthEsq = depth(root->esq, x);    //resultado da função para a esq e dir
    int depthDir = depth(root->dir, x);
    
    if(depthEsq < 0 && depthDir < 0){   //se nao encontrar nada
        return -1;
    }
    else if(depthEsq < 0){      //se na esq nao existir x 
        return depthDir + 1;
    }
    else if(depthDir < 0){     //se na direita nao existir x
        return depthEsq + 1;
    }
    else {
        if(depthEsq > depthDir){
            return depthDir + 1;
        } else {
            return depthEsq + 1;
        }
    }
}
