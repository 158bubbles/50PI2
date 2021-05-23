LInt rotateL (LInt head){
    
    //para o caso de nao ter elementos ou ter apenas 1
    if(head == NULL || head->prox == NULL){
        return head;
    }
    
    LInt current = head;
    LInt primeiroNodo = head;      //apontador para o primeiro nodo que vai ser colocado no fim
    LInt novaLista = head->prox;    //nova lista que começa um nodo a seguir do primeiro nodo que foi retirado
    
    while(current->prox != NULL){     //enquanto nao chega ao fim da lista, vai avançando
        current = current->prox;
    }
    
    //se sair do ciclo quer dizer que chegou ao fim e tem de acrescentar o elemento do inicio 
    current->prox = primeiroNodo;
    primeiroNodo->prox = NULL;
    
    
    return novaLista;
}
