#include <stdio.h>

void numero(int n1)
{

    if(n1 % 2 == 0 )
    {
        printf("é un numero pari\n");
    }
    else 
    {
        printf("é un numero dispari\n");
    }
}

int main()
{
    int n1;

    printf("inserisci un numero\n");
    scanf("%d", &n1);
    
    numero(n1);

    return(0);
}