#include <stdio.h>

int main() {
    int  den, num = -1;
    float cont = 0;
    for (den = 1; den<=50; den++){
        num +=2;
        cont += num/den;
    }
    printf("\n RESULTADO = %.2f", cont);
}
