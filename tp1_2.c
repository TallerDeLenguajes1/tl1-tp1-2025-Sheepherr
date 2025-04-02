#include <stdio.h>

void devolverCuadrado (int *num);

int main () {

    int num, *num2;
    num2 = &num;

    printf("Ingrese el numero que desea elevar al cuadrado: ");
    scanf("%d", &num);

    devolverCuadrado(num2);

    return 0;
}

void devolverCuadrado (int *num) {

    int result;
    result = *num * *num;

    printf("El cuadrado del numero %d es: %d", *num, result);
}