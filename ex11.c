#include <stdio.h>

int main ()
{
    int x = 1;
    int somma =0;
    while(x<=100)
    {
        somma = somma + x;
        x = x + 1;

    }
    printf("%d\n", somma);
    return(0);
}