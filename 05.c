void insertOrd (LInt *head, int x){

    LInt current = *head;  //*heah é o apontador da lista current
    
    if (current == NULL){   //se a lista nao existir, criamos uma nova e inserimos esse valor x
        LInt novo = newLInt (x, NULL);
        *head = novo;    //o apontador *head aponta p o inicio da lista novo
        return;
    }
    
    if(x <= current->valor){  //se so tiver um valor e for maior ou igual a x
        LInt novo = newLInt(x, current);  //inserimos antes do current
        *head = novo;  //e a head a apontar p antes do x inserido
        return;
    }
    
    LInt temporario;  //nodo antes do current p quando temos mais que um elemento na lista
    
    while(current!=NULL && x > current->valor){
        temporario = current;   //andam juntos
        current = current->prox;
    }
    
    if(current == NULL){  //se falhar logo na primeira condição(por exepmlo chegar ao fim da lista)
        LInt novo = newLInt(x, NULL);   //cria se um nodo com o x 
        
        temporario->prox = novo;  //e mete se o x entre o temporario e o currentNULL
        
    } else {    //se falhar na segunda condição
        temporario->prox = newLInt (x, current);  //metemos entre o temporario e o current
    }
    
}
