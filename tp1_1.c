#include <stdio.h>

int main () {

    printf("Hola Mundo\n");

    int num = 53, *punt, tama;

    punt = &num;
    tama = sizeof(num);


    printf("Contenido del puntero: %d\nDireccion de memoria almacenada en el puntero: %p\nDireccion de memoria de la variable: %p\nDirecion de memoria del puntero: %p\nTamaño de memoria utilizado por la variable: %d", *punt, punt, &num, &punt, tama);


    return 0;
}