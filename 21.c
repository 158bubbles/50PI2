LInt NForward (LInt head, int N){
    
    LInt current = head;
    
    while(N > 0){
        current = current->prox;
        N--;     //vai decrescendo para quando o N chegar ao fim, retornarmos o endereço de onde ele parou
    }
    
    
    return current;
}
