#include <stdio.h>
#include <stdlib.h>
#define CANT 100
typedef struct {
	int dia,mes,anio;
    }eFecha;
    typedef struct {
    char nombre [21];
    int legajo;
    float salario;
    char sexo;
    eFecha fn;
    }eEmpleado;
int main()
{
eEmpleado emp[CANT],aux;
int i,j;
for(i=0;i<CANT-1;i++)
{
    for(j=i+1;j<CANT;j++)
    {
        if(emp[i].salario<emp[j].salario)
        {
            aux=emp[i];
            emp[i]=emp[j];
            emp[j]=aux;
        }
        else{
            if(emp[i].salario==emp[j.salario)
            {
                if(strcmp(emp[i].nombre,emp[j].nombre)>0)
                {
                    aux=emp[i];
                    emp[i]=emp[j];
                    emo[i]=aux;
                }
            }
        }
    }
}

  /*eEmpleado emp;
   emp.nombre
   emp.legajo
   emp.fn.dia*/
    return 0;
}
