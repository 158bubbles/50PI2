int iguaisAB (ABin rootA, ABin rootB) {
    
    if(rootA == NULL && rootB == NULL){   //sao iguais
        return 1;
    }
    else if(rootA == NULL && rootB != NULL){
        return 0;
    }
    else if(rootA != NULL && rootB == NULL){
        return 0;
    }
    else{ 
        if(rootA->valor == rootB->valor){
            
            //pq se der V * V = V, V * F = F, F * V = F, F * F = F, ou seja, so sao iguais se as esq forem iguais e as dir forem iguais
            
            return (iguaisAB(rootA->esq, rootB->esq) * iguaisAB(rootA->dir, rootB->dir));
        
        } else {
            
            return 0;
        }
    
    }
