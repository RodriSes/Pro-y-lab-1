
typedef struct
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int id;
    char descripcion[51];
    int isEmpty;
} eSector;

typedef struct
{
    char categoria;
    char nombre[31];
    int edad;
    int isEmpty;
    int legajo;
    float sueldo;
    eFecha fechaIng;
    eSector sector;
} eEmpleado;

int menu();
void inicializarVariables(eEmpleado vec[], int tam);
int buscarLibre(eEmpleado lista[], int tam);
int buscarLegajo(eEmpleado lista[], int tam, int legajo);
void mostrar(eEmpleado lista);
void mostrarTodos(eEmpleado lista[], int tam);
void alta(eEmpleado lista[], int tam);
void baja(eEmpleado lista[], int tam);
void modificacion(eEmpleado lista[], int tam);
void ordenamiento(eEmpleado emp[], int tam);
void gotoxy(int x,int y);
