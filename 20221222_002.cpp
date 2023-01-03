#include <stdio.h>

int main() {
    float num, maior = 0, menor =0;
    int i;
    
    for(i=0; i<15; i++){
        printf("digite um valor real: ");
        scanf("%f", &num);
        if(i==0){
            maior = num;
            menor = num;
        }
        if(maior < num){
            maior = num;    
        }
        if (num < menor){
            menor = num;
        }
    } 
    printf("\nMaior: %.2f, Menor: %.2f ", maior, menor);
}
