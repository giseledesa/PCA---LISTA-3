#include <stdio.h>

int main() {
    int  i, num, cont = 0;
    printf("digite um n�mero: ");
    scanf("%d",&num);
    for (i=1; i<=num; i++){
        if(num%i==0){
            cont++;
            }
    }
    if(cont==2){
        printf("\n%d � um n�mero primo");
    }
    else{
         printf("\n%d N�O � um n�mero primo");
    }
}
