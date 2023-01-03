#include <stdio.h>

int main() {
    int  i, num, cont = 0;
    printf("digite um número: ");
    scanf("%d",&num);
    for (i=1; i<=num; i++){
        if(num%i==0){
            cont++;
            }
    }
    if(cont==2){
        printf("\n%d é um número primo");
    }
    else{
         printf("\n%d NÃO é um número primo");
    }
}
