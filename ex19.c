#include <stdio.h>

void stampaCubo()
{
    int numero;
    int cubo;

    printf("inserisci un numero: ");
    scanf(" %d", &numero);
    cubo = numero * numero * numero;
    printf("il Cubo di %d è %d\n", numero, cubo);
}

int main() {
    stampaCubo();
}