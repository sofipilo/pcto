#include <stdio.h>
#include <math.h>

int perimetro(int a, int b, int c)
{
    int perimetro;
    perimetro = a + b + c;
    return(perimetro);
}

int area(int a, int b, int c, int p)
{
    int area;
    int s;
    s = p / 2;
    area = sqrt((p)*(s-a)*(s-b)*(s-c));
}

int main()
{
    int x;
    int y;
    int z;
    int p;
    int a;
    int s;

    printf("inserisci 3 misure\n");
    printf("prima misura: \n");
    scanf("%d", &x);
    printf("seconda misura: \n");
    scanf("%d", &y);
    printf("terza misura: \n");
    scanf("%d", &z);

    p = perimetro(x, y, z);
    printf("il perimetro è di: %d\n", p);

    a = area(x,y,z,p);
    printf("l'area è di: %d\n", a);
}