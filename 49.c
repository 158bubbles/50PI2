int quantosMaiores (ABin root, int x) {
    
    if(root == NULL){
        return 0;
    }
    
    if(root->valor > x){  //procuramos nos dois lados pq pode haver maiores que x nos dois lados
        return (1 + quantosMaiores(root->esq, x) + quantosMaiores(root->dir, x));
    }
    else {
        return quantosMaiores(root->dir, x);
    }
    
}
