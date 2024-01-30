#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;

    printf("inserisci tre numeri\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if(n1 == n2 && n1 == n3)
    {
        printf("il triangolo è equilatero\n");
    }
    if(n2 == n3 && n2 != n1|| n1 == n3 && n1 != n2 || n1 == n2 && n1 != n3)
    {
        printf("il triangolo è isoscele\n");
    }
    if(n1 != n2 && n1 != n3 && n2 != n3)
    {
        printf("il triangolo è scaleno\n");
    }

    return(0);
}