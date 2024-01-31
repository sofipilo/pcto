#include <stdio.h>

void stampalettera()
{
    char car;

    printf("inserisci un car\n");
    scanf("%c", &car);

    while(car == 'a' || car == 'b' || car == 'c' || car == 'd' || car == 'e' || car == 'f' || car == 'g' || car == 'h' || car == 'i' || car == 'j' || car == 'k' || car == 'l' || car == 'm' || car == 'n' || car == 'o' || car == 'p' || car == 'q' || car == 'r' || car == 's' || car == 't' || car == 'u' || car == 'v' || car == 'w' || car == 'x' || car == 'y' || car == 'z')
    { if(car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u')
        {
        printf("è una vocale\n");
        }
      else {
        printf("è una consonante\n");
    }
    }
}

int main() {
    stampalettera();
}