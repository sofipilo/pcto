#include <stdio.h>

int main()
{
    int numero;
    int numero2;
    int numero3;
    int numero4;
    int numero5;

    printf("inserisci l'età di greta\n");
    scanf("%d", &numero1);
    printf("inserisci l'età di marco\n");
    scanf("%d", &numero2);
    printf("inserisci l'età di lorenzo\n");
    scanf("%d", &numero3);
    printf("inserisci l'età di aurora\n");
    scanf("%d", &numero4);
    printf("inserisci l'età di sofia\n");
    scanf("%d", &numero5);
    printf("il tuo risultato è: %d\n", numero + numero2 + numero3 + numero4 + numero5);
}