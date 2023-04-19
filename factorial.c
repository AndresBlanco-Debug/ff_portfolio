#include <stdio.h>

long calcularFactorial(int numero) {
    long factorial = 1;

    if (numero < 0) {
        printf("Error: El factorial no está definido para números negativos.\n");
        return -1; 
    }
    for (int i = 1; i <= numero; i++) {
        factorial *= i; 
    }

    return factorial;
}

int main() {
    int numero;
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    long resultado = calcularFactorial(numero);

    if (resultado != -1) {
        printf("El factorial de %d es: %ld\n", numero, resultado);
    }

    return 0;
}
