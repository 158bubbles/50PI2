void eliminaInt(LInt head, int x){
    LInt temporario = head;    //dizemos q o temp está na mesma posição que a head
    head = head->prox;         //mas depois avançamos a head p assegurar a distancia
    
    while(head != NULL){
        if(head->valor == x){
            temporario->prox = head->prox;   //antes de eliminar a head, tivemos que avançar o temporario para o nodo a seguir do elemento que é eliminado
            free(head);
            head = temporario->prox;      //a nova head apos eliminarmos a outra é o nodo a seguir do temporario
            
        } else {
            temporario = temporario->prox;  //se n eliminarmos nada, simplesmente avançamos de nodo para analisarmos
            head = head->prox;
        }
    }
} 



int removeDups (LInt *head){    //remove e dá nos o numero de removidos
    
    int inicio = length(*head);
    
    if(inicio == 0){    // se o tamanho inicial for 0, ja nem faz mais nd
        return 0;
    }
    
    LInt current = *head;
    while(current != NULL){
        eliminaInt(current, current->valor);
        current = current->prox;
    }
    
    int fim = length(*head);
    
    return (inicio-fim);
}
