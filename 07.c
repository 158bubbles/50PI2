void merge (LInt *head, LInt l1, LInt l2){
    
    *head = newLInt(0, NULL);  //nodo a ser removido
    LInt current = *head;
    
    while(l1!=NULL || l2!=NULL){  //se uma delas for nula, a outra junta se à lista
        
        if(l1 == NULL){
            current->prox = l2;
            break;          //e nao faz mais nada da função
        } else if(l2 == NULL) {
            current->prox = l1;
            break;
        }
        
        //se nenhuma delas for nula, vemos qual é maior ou menor pela cabeça
        else {
            if(l1->valor < l2->valor){
                current->prox = l1;       //o current passa a apontar p l1
                l1 = l1-> prox;          //l1 avança um nodo
                current = current->prox;   //e o current tbm avança
            }
            else {
                    current->prox = l2;
                    l2 = l2-> prox;
                    current = current->prox;
            }
            
        }
    }
    current = *head;  //guarda o elemento a remover
    *head = (*head)->prox;  //passa a apontar p o verdadeiro inicio da nova lista merged
    free(current);  //removemos pq ja n precisamos mais dele
}
