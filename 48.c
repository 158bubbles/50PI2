void removeMaiorA (ABin *root) {
    
    ABin current = *root;
    ABin temporario;
    
    if(*root == NULL){
        return;
    }
    
    //caso à direita da root for nula quer dizer q é a ultima (amaior)
    if((*root)->dir == NULL){
        ABin temporario = *root;   //criamos um temporario p guardar a root antes de a eliminar
        (*root) = (*root)->esq;
        free(temporario);
        
    }
    else {
        removeMaiorA(&((*root)->dir));  //vai fazendo recursivamente para a parte da direita pq é onde está o maior
    }
    
}
