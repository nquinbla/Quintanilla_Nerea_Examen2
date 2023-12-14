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
}
