# include <studio.h>
# include <string.h>
# include <stdlib.h>

// Estructura Estudiante
struct Estudiante
{
    char nombre[30];
    int edad;
    float promedio;
    char materias[10][50];
    int numMaterias;
};

// Función mostrarEstudiante()
void mostrarEstudiante (const struct Estudiante* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %f\n", estudiante->promedio);

    printf("Materias Inscritas:\n");
    for (int i = 0; i < estudiante->numMaterias; i++)
    {
        printf("%s\n", estudiante->materias[i]);
    }
    printf("\n");
}

// Función para agregar materias a un estudiante
void agregarMateria(struct Estudiante* estudiante, const char* materia) {
    if (estudiante->numMaterias < 11)
    {
        strcpy(estudiante->materias[estudiante->numMaterias], materia);
        estudiante->numMaterias++;
    }
    else {
        printf("No se pueden agregar más materias\n");
    }
}

// Funcion para eliminar materias de un estudiante

