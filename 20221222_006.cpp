#include <stdio.h>

int main() {
    int i, soma = 0, n;
    printf("ENTRE COM UM NÚMERO: ");
    scanf("%d",&n);
    
    for (i = 1; i < n; i++){
        if (n%i == 0){
            soma +=i;
        }
    }
    if(soma != n){
        printf("O NUMERO %d NÃO É PERFEITO", n);
    }
    if(soma == n){
        printf("O NUMERO %d É PERFEITO", n); 
    }
}
