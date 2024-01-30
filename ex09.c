#include <stdio.h>

int main ()
{
    int n1;
    int n2 = 1969;

    printf("inserisci il tuo anno di nascita\n");
    scanf("%d", &n1);

    if(n1 == n2)
    {
        printf("sei nato l'anno in cui l'uomo è andato sulla Luna\n");
    }
    else if(n1 < n2)
    { 
        printf("sei nato %d anni prima che l'uomo andasse sulla Luna\n", (n2 - n1));
    }
    else if(n1 > n2)
    {
        printf("sei nato %d anni prima che l'uomo andasse sulla Luna\n", (n1 - n2));
    }
}