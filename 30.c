void mirror (ABin *root){
    
    if(*root != NULL){
        
        //trocamos os ramos de sitio
        ABin temporario = (*root)->esq;
        (*root)->esq = (*root)->dir;
        (*root)->dir = temporario;
    
    
    //agora, chamamos a função recursivamente para cada ramo
    mirror(&((*root)->esq));
    mirror(&((*root)->dir));
    }
}
