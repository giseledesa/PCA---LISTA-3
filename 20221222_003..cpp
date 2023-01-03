#include <stdbool.h>
#include <stdio.h>

int main() {
    int num, pares = 0, impar =0;
    
    while(true){
        printf("digite um valor real: ");
        scanf("%d", &num);
        if (num >= 1000){
            printf("\nPar: %d, Impar: %d ", pares, impar);
            break;
        }
        if(num%2==0){
            pares +=num;    
        }
        else{
             impar +=num;
        }
    }
}
