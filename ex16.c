#include <stdio.h>

int main ()
{ 
    int x = 100;
    
    while(x > 0)
    {
        printf("%d\n", x);
        x = x - 2;
    }

    printf("fine\n");

    return(0);
}