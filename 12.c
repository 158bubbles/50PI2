int removeMaiorL (LInt *head){
    
    LInt removidos;     //onde vamos guardar todos os nodos a levarem com free
    LInt current = *head;
    LInt temporario;
    int max = current->valor;
    
    //procura o maior numa lista
    while(current != NULL){
        if(current->valor > max){
            max = current->valor;
        }
        current = current->prox;
    }
    
    //depois do loop, vemos se o maior é o primeiro elemento da lista
    if((*head)->valor == max){
        removidos = *head;    //guarda-se a head a ser removida nos removidos
        *head = (*head)->prox;   //a nova head agora é o nodo seguinte
        free(removidos);
        return max;
    }
    
    current = *head;
    
    //novo loop que acaba corre a lista ate encontrar o maior elemento
    while(current->valor != max){
        temporario = current;
        current = current->prox;
    }
    
    //se sair do ciclo, é pq encontrou o maior elemento e por isso remove-o
    removidos = current;
    temporario->prox = current->prox;
    free(current);
    
    return max;
}
