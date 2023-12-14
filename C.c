# include <stdio.h>
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
void eliminarMateria(struct Estudiante* estudiante, const char* materia) {
    for (int i = 0; i < estudiante->numMaterias; i++) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
        }
        for (int j = i; j < estudiante->numMaterias - 1; j++)
        {
            strcpy(estudiante->materias[j], estudiante->materias[j + 1]);
        }
        estudiante->numMaterias--;
        break;
    }
}

// Estructura asistencia
struct Asistencia {
    char fecha[30];
    int materia;
    int estado;
};

// Funcion para registrar asisencia de un estudiante
void registrarAsistencia(struct Estudiante* estudiante, struct Asistencia* asistencia) {
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        if (strcmp(estudiante->materias[i], (const char *) asistencia->materia) == 0) {
            // Aquí puedes implementar lógica adicional para manejar la asistencia
            printf("Asistencia registrada para la materia %s\n", asistencia->materia);
            return;
        }
    }
    fprintf(stderr, "El estudiante no está inscrito en la materia de asistencia.\n");
}

// Funcion principal
int main() {
    struct Estudiante estudiante = {"Nerea", 18, 9.5, {"Matematicas", "Programacion"}
    mostrarEstudiante(&estudiante);

    agregarMateria(&estudiante, "Fisica");
    mostrarEstudiante(&estudiante);

    eliminarMateria(&estudiante, "Matematicas");
    mostrarEstudiante(&estudiante);

    struct Asistencia asistencia = {"2021-09-01", (int) "Programacion", 1};
    registrarAsistencia(&estudiante, &asistencia);

    return 0;
    }