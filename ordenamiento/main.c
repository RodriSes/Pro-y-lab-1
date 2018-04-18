#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ELEMENTOS 5
int main()
{
system("title § TU TIA §");
system("color 09");
system("mode con: cols=50 lines=26");
int i,j;
char nombre[ELEMENTOS][50] = {"Pedro","Carlos","Juan","Ernesto","Mario"};
char apellido[ELEMENTOS][50]= {"Gomez","Fernandez","Paz","Perez","Lopez"};
char auxiliar[50];
for(i=0;i< ELEMENTOS-1;i++)
{
for(j=i+1;j<ELEMENTOS;j++)
{
if(strcmp(nombre[i],nombre[j])>0)
{
strcpy(auxiliar,nombre[i]);
strcpy(nombre[i],nombre[j]);
strcpy(nombre[j], auxiliar);
strcpy(auxiliar,apellido[i]);
strcpy(apellido[i],apellido[j]);
strcpy(apellido[j], auxiliar);
}
}
}
printf ("\nNombres \tApellidos");
for(i=0;i<ELEMENTOS;i++)
{
    printf("\n%s \t%s",nombre[i],apellido[i]);
}
}

