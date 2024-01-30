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

    if(n3 - n2 == n2 - n1)
    {
        printf("è una progressione\n");
    }
    else {
        printf("non è una progressione\n");
    }
        
        
}