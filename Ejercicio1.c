#include <stdio.h>
#include <string.h>

int main() {
    char cadena[1000];       // Para almacenar el string del usuario
    char caracter;           // Para el carácter a buscar
    int contador = 0;

    //Recibe un string del usuario
    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    //Elimina el salto de línea si lo hay
    size_t len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }

    //Solicita el carácter a contar
    printf("Ingrese el caracter a contar: ");
    scanf(" %c", &caracter);  // Espacio antes de %c para ignorar cualquier espacio o salto de línea previo

    //Cuenta cuántas veces aparece el carácter
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == caracter) {
            contador++;
        }
    }

    printf("El caracter '%c' aparece %d veces.\n", caracter, contador);

    //Imprime el string en orden inverso
    printf("Cadena invertida: ");
    for (int i = strlen(cadena) - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}
