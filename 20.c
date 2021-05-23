int length (LInt head){
    int i;
    for (i = 0; head != NULL; i++){
    	head = head->prox;
    }
    return i;
}


int drop (int n, LInt *head){
    
    LInt current = *head;
    int i, len = length(current);
    
    //se a lista for mais pequena ou igual a n, elimina a lista toda
    if(n >= len){
        free(current);
        *head = NULL;   //o apontador da head aponta para NULL pq foi tudo apagado
        return len;
    }
    
    //vai correndo a lista ate chegar ao momento de apagar elementos
    for(i=0; (i+1) < n;i++){
        current = current->prox; 
    }
    
    //quando sair do ciclo pq chegou ao n e por isso é para remover elementos
    LInt restantes = current->prox;
    current->prox = NULL;   //a lista divide se em duas (removidos/restantes) por isso a seguir do current nao ha mais nada
    free(*head); 
    *head = restantes;   //atualizamos o apontador depois de elminarmos os nodos
    
    
    return n;
}
