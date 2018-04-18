#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    int edad;
    char sexo;
    int notabaja;
    char sexobajo;
    int acumulador = 0;
    float promedio = 0;
    int edadminima;
    char sexominimo;
    int notaminima;
    int cmujer = 0;
    int notamujer;
    int edadmujer;
    int flag = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf ("ingrese una nota entre 0 y 10: ");
        scanf ("%d",&nota);

        while(nota < 0 || nota > 10)
        {
            printf ("ingrese una nota entre 0 y 10: ");
            scanf ("%d",&nota);
        }
        printf ("ingrese la edad: ");
        scanf ("%d",&edad);
        while(edad < 0)
        {
            printf ("ingrese la edad: ");
            scanf ("%d",&edad);
        }
        printf ("ingrese el sexo de la persona: f/m: ");
        fflush (stdin);
        scanf ("%c",&sexo);
        sexo = tolower(sexo);
        while(sexo != 'f' && sexo != 'm')
        {
            printf ("ingrese el sexo de la persona: f/m: ");
            fflush (stdin);
            scanf ("%c",&sexo);
            sexo = tolower(sexo);
        }

        acumulador = acumulador + nota;
        if (nota < notabaja || flag == 0)
        {
            notabaja = nota;
            sexobajo = sexo;
        }
        if(edad < edadminima)
        {
            edadminima = edad;
            notaminima = nota;
            sexominimo = sexo;
            flag++;

        }
        if (sexo == 'f' && cmujer == 0)
        {
            notamujer = nota;
            edadmujer = edad;
            cmujer = cmujer + 1;
        }

    }
    promedio = acumulador / 5;
    printf ("la nota mas baja fue %d y la persona es %c", notabaja, sexobajo);
    printf ("la edad minima fue %d la nota fue %d y la persona es %c ", edadminima, notaminima, sexominimo);
    printf("el promedio de las notas es %f", promedio);

    if (cmujer == 1)
    {
        printf ("la nota de la primera mujer es %d y tiene %d años", notamujer, edadmujer);
    }
    else
    {
        printf ("No hay mujeres");
    }
    return 0;
}
