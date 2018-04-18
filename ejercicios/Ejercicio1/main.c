#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    float superficie;
    int perimetro;
    printf("Indique la base de el triangulo: ");
    scanf("%d",&base);
    printf("indique la altura: ");
    fflush(stdin);
    scanf("%d",&altura);
    superficie = (float) (altura / 2) * base;
    perimetro = altura * 3;
    printf("La superficie es: %.1f y el perimetro: %d", superficie,perimetro);

    return 0;
}
