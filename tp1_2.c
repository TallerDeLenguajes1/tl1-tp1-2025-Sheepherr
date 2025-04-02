#include <stdio.h>

int devolverCuadrado (int num);

int main () {

    int num, num2;

    printf("Ingrese el numero que desea elevar al cuadrado: ");
    scanf("%d", &num);

    num2 = devolverCuadrado(num);

    printf("El cuadrado de %d es: %d", num, num2);

    return 0;
}

int devolverCuadrado (int num) {

    return num*num;
}