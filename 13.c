void init (LInt *head){
    
    LInt current = *head;
    
    //caso so tenha um elemento
    if((*head)->prox == NULL){
        free(*head);
        *head = NULL;
    return;
    }
    
    //caso tenha mais que um elemento
    LInt temporario;
    
    while(current->prox != NULL){       //enquanto nao chegar ao fim da lista vai avançando de nodos
        temporario = current;      //o temporario vai para o lugar do current e o current avança
        current = current->prox;
    }
    //quando sair do ciclo pq chegou ao fim
    temporario->prox = NULL;    //pq o temporario ta antes do current que atualmente ta no NULL
    free(current);
}
