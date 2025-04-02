#include <stdio.h>

void devolverCuadrado (int *num);
void invertir(int *a,int *b);
void ordenar (int *a, int *b);
int main () {

    int num, *num2, num3, num4, *p_n3, *p_n4, a, b, *p_a, *p_b;
    num2 = &num;
    p_a = &a;
    p_b = &b;
    p_n3 = &num3;
    p_n4 = &num4;
    printf("Ingrese el numero que desea elevar al cuadrado: ");
    scanf("%d", &num);

    devolverCuadrado(num2);
    
    printf("Ingrese dos numeros para invertir entre ellos.\nnum1: ");
    scanf("%d", &a);
    printf("num2: ");
    scanf("%d", &b);
    
    invertir(p_a, p_b);
    
    printf("Ingrese dos numeros para ordenar de mayor a menor.\nnum1: ");
    scanf("%d", &num3);
    printf("num2: ");
    scanf("%d", &num4);

    ordenar(p_n3,p_n4);

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

    printf("El nuevo valor de la variable a es: %d\nEl nuevo valor de la variable b es: %d\n", *a, *b);

}
void ordenar (int *a, int *b) {
    int num;
    if (*a > *b)
    {

        num = *b;
        *b = *a;
        *a = num;
        printf("El numero mas grande es: %d\nEl nuemero mas chico es: %d", *b, *a);

    } else if (*a = *b)
    {

        printf("Los numeros son iguales.");

    } else
    {

        printf("El numero mas grande es: %d\nEl numero mas chico es: %d", *b, *a);

    }
    
}
