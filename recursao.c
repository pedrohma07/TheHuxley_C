#include <stdio.h>
#include <stdlib.h>

int soma(int vet[],int i, int tam){
    if(i == tam-1){
        return vet[i];
    }
    else{
        return vet[i] + soma(vet,i+1, tam);
    }
}

int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    int resultado = soma(v, 0, 10);
    printf("%d\n", resultado);
    
    return 0;
}
