#include <stdio.h>

void operazione()
{
    int x;
    int y;
    char a;

    printf("inserisci due variabili\n");
    scanf("%d" , &x);
    scanf("%d" , &y);
    printf("che operazione vuoi fare?\n");
    scanf(" %c" , &a);
    if(a == '+')
    {
        printf("il risultato è %d" , x + y);
    }
    if(a == '-')
    {
        printf("il risultato è %d" , x - y);
    }
    if(a == '*')
    {
        printf("il risultato è %d" , x * y);
    }
    if(a == '/')
    {
        printf("il risultato è %d\n" , x / y);
    }
}

int main() {
    operazione();
}