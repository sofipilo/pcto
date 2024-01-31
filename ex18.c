#include <stdio.h>

int main ()
{ 
    float x;
    float x1;
    float x2; 
    
    printf("inserisci un numero\n");
    scanf("%f", &x);

    while(x >= 0)
    {        
        
        //printf("%f\n", x);

        if( x >= 30 && x < 50)
        { 
            x = x*5;
            printf("sconto del 10\n");
            x1 = x * 0.1;
            printf("%f\n", x - x1);
        
        }
        else if(x >= 50)
        {
            x = x*5;
            printf("sconto del 30\n");
            x2 = x * 0.3;
            printf("%f\n", x - x2);
        }
        else {
            x = x * 5;
            printf("%f", x);
        }

        printf("inserisci un numero\n");
        scanf("%f", &x);

    }

    printf("fine\n");

    return(0);
}