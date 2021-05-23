 int pruneAB (ABin *root, int depth) {
     
     if(*root == NULL){    //se a arvore nao tiver elementos
         return 0;
     }
     
     if(depth == 0){   //pelo enunciado, quando temos depth = 0, é para remover todos os nodos
         
         int total = 1 + pruneAB(&((*root)->esq), 0) + pruneAB(&((*root)->dir), 0);   //total de nodos a ser removidos
         free(*root);
         *root = NULL;    //fechamos a arvore
         
         return total;
     }
     else {   //caso contrario, simplesmente corremos a arvore
         return (pruneAB(&((*root)->esq), depth-1) + pruneAB(&((*root)->dir), depth-1));
         
     }

 }
