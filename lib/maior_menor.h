int maior_valor(int array[], int qtd){
    int m = array[0];
    // i inicia na posição 1 porque não há necessidade de comparar a posição inicial zero com ele mesmo
    int i = 1;
    while(i <= qtd-1){
        if(array[i] > m){
            m = array[i];
        }
        i++;
    }
    return m;
}