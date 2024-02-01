#include <stdio.h>


int fattoriale(int n1)
{
    int y = 1;
    while(n1 >= 1)
    {
        y = y * n1;
        n1 = n1 - 1;
    }

    return(y);
}

int main()
{
    int n1, f;
    printf("inserisci un numero\n");
    scanf("%d", &n1);
    f = fattoriale(n1);
    printf("%d\n", f);

    return (0);
}