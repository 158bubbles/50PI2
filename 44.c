int addOrd (ABin *root, int x) {
    
    if(*root == NULL){
        ABin nodo = malloc(sizeof(ABin));   //se a arvore é nula, criamos um novo nodo p meter o x que nao tem nem esq nem dir
        nodo->valor = x;
        nodo->esq = NULL;
        nodo->dir = NULL;
        *root = nodo;   //atualizar o apontador
        return 0;
    }
    
    ABin current = *root;   //apontador que vai percorrer a arvore
    ABin temporario;      //usado para guardar a informaçao do nodo antes de ser movido
    
    while(current != NULL){
        if(current->valor == x){
            return 1;
        }
        
        temporario = current; //guardamos o current antes de o mover para a esq ou a dir
        
        if(x < current->valor){
            current = current->esq;   //se o x for menor q o current, este vai para a parte esq do nodo current
        }
        else {
            current = current->dir;
        }
        
    }
    
    //caso o current chegue a null, quer dizer que temos de meter o x num novo nivel acrescentado à arvore
    ABin novoN = (ABin) malloc(sizeof(ABin));
    novoN->valor = x;
    novoN->esq = NULL;
    novoN->dir = NULL;
    
    //agora decidimos se no novo nivel ele está na esq ou na dir
    if(x < temporario->valor){
        temporario->esq = novoN;
    } 
    else {
        temporario->dir = novoN;
    }
    
    return 0;
}
