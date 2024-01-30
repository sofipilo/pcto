#include <stdio.h>

int main()
{
    int n1;

    printf("inserisci un anno\n");
    scanf("%d", &n1);

    if((n1 % 4 == 0 && n1 % 100 != 0) || n1 % 400 == 0)
    {
        printf("è un anno bisestile\n");
    }
    else 
    {
        printf("non è un anno bisestile\n");
    }
    return(0);   
        
}