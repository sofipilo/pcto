#include <stdio.h>

int main ()
{ 
    float x;
    float somma = 0;
    float numeri = 0;
    float media; 
    
    while(x >= 0)
    {
        printf("inserisci un numero\n");
        scanf(" %f", &x);
        
        somma = somma + x;
        numeri = numeri + 1;
       
        if(x >= 0)
        {
            media = somma / numeri;
            printf("media %f\n", media);
        }

    }

    printf("fine\n");

    return(0);
}