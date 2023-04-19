#include <stdio.h>

int calcularFactorial(int numero) {
    int factorial = 1;

    if (numero < 0) {
        printf("Error: El factorial no está definido para números negativos.\n");
        factorial = 0;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;

    return factorial;
}

int main() {
    int numero;
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    int resultado = calcularFactorial(numero);

    if (resultado != 0) {
        printf("El factorial de %d es: %d\n", numero, resultado);
    }

    return 0;
}
