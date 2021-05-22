void splitQS (LInt head, int x, LInt *mx, LInt *Mx){
    
    LInt mxcurrent, Mxcurrent;    //percorrem as listas mx e Mx
    
    while(head != NULL){
        
        if(head->valor < x){
            if(*mx == NULL){    //se a primeira nova lista ainda n tiver elementos
                *mx = head;              //head é o primeiro nodo da lista mx
                mxcurrent = *mx;          //mxcurrent continua a percorrer a lista mx sem mexer no inicio
                head = head->prox;        //na lista head avança-se mais um nodo p analisar
                mxcurrent->prox = NULL;   //fecha a lista mx
                
            } else {          //se a primeira nova lista ja tiver elementos
                mxcurrent->prox = head;      //acrescenta-se a head no fim da lista mx
                mxcurrent = mxcurrent->prox;    //como acrescentamos mais um nodo, o mxcurrent tem de avançar um
                head = head->prox;             //a head também avança um p continuarmos a analisar os nodos da lista
                mxcurrent->prox = NULL;     //fecha a lista mx
            }
        
        } else {
            if(*Mx == NULL){        // se a segunda nova lista ainda n tiver elementos
                *Mx = head;
                Mxcurrent = *Mx;
                head = head->prox;
                Mxcurrent->prox = NULL;
                
            } else {                //se a segunda nova lista ja tiver elementos
                Mxcurrent->prox = head;
                Mxcurrent = Mxcurrent->prox;
                head = head->prox;
                Mxcurrent->prox = NULL;
                
            }
        }
    }
}
