#include <stdio.h>
#include <stdlib.h>

int dividir(int numerador, int denominador) {
    if (denominador == 0) {
        printf("ERROR: No se puede dividir entre 0.\n");
        return 0;
    }
    
    int negativo = (numerador < 0) ^ (denominador < 0);
    numerador = abs(numerador);
    denominador = abs(denominador);

    int cociente = 0;
    while (numerador >= denominador) {
        numerador -= denominador;
        cociente++;
    }

    if (negativo) {
        return -cociente;
    } else {
        return cociente;
    }
}

int main() {
    int numerador, denominador;

    printf("Ingrese el numerador: ");
    scanf("%d", &numerador);
    printf("Ingrese el denominador: ");
    scanf("%d", &denominador);

    int resultado = dividir(numerador, denominador);
    if (denominador != 0) {
        printf("Resultado: %d\n", resultado);
    }
    
    return 0;
}

