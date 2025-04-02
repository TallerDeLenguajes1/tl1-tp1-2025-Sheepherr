#include <stdio.h>

void devolverCuadrado (int *num);
void invertir(int *a,int *b);

int main () {

    int num, *num2,a,b, *p_a, *p_b;
    num2 = &num;
    p_a = &a;
    p_b = &b;
    printf("Ingrese el numero que desea elevar al cuadrado: ");
    scanf("%d", &num);

    devolverCuadrado(num2);
    
    printf("Ingrese dos numeros para invertir entre ellos.\n num1: ");
    scanf("%d", &a);
    printf("num2: ");
    scanf("%d", &b);
    
    invertir(p_a, p_b);
    return 0;
}

void devolverCuadrado (int *num) {

    int result;
    result = *num * *num;

    printf("El cuadrado del numero %d es: %d\n", *num, result);
}
void invertir (int *a, int *b) {

    int num;
    num = *b;
    *b = *a;
    *a = num;

    printf("El nuevo valor de la variable a es: %d\nEl nuevo valor de la variable b es: %d", *a, *b);

}