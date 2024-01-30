#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    printf("a quanti anni si può prendere la patente nel tuo paese?\n");
    scanf("%d", &numero1);
    printf("inserisci la tua età\n");
    scanf("%d", &numero2);
    if(numero2>=numero1) 
    {
        printf("puoi prendere la patente\n");
    }
    else{
        printf("non puoi prendere la patente\n");
    }
    return(0);
}