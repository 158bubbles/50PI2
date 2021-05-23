int take (int n, LInt *head){
    
    int i;
    LInt current = *head;
    
    //enquanto nao chega ao elemento nº n avança so na lista
    for(i=0; i+1 < n && current != NULL;i++){
        current = current->prox;
    }
    
    //se saiu do ciclo pq chegou a current == NULL
    if(current == NULL){
        return i;
    }
    
    //se saiu do ciclo pq chegou à altura de apagarmos os nodos para lá do n
    LInt removido = current->prox;   //criamos uma LInt para agrupar o nodo a remover, que sao sempre os a seguir do current em que estva ao sair do ciclo
    current->prox = NULL;
    free(removido);
    
    return i+1;
} 
