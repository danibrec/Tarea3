#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LINEA 1024


//función para validar si la línea contiene solo dígitos
int validarSiTieneLetras(const char *linea) { 
    for (int i = 0; linea[i] != '\0'; i++) {
        if (!isdigit(linea[i])) {
            return 0; // Contiene caracteres no numéricos
        }
    }
    return 1; // Todos los caracteres son dígitos
}

int main() {
    char linea[MAX_LINEA];
    //mientras se lea una línea del stdin
    while (fgets(linea, sizeof(linea), stdin)) {        // Elimina salto de línea al final
        linea[strcspn(linea, "\n")] = '\0';         // Validar si la línea está vacía o contiene caracteres no numéricos
        if (strlen(linea) == 0 || !validarSiTieneLetras(linea)) {   // si la línea está vacía o contiene letras
            fprintf(stderr, "Error - Línea inválida: '%s'\n", linea);    // Imprimir mensaje de error
        } else { // si la línea es válida
            printf("Número: '%s'\n", linea); // Imprimir la línea como número
        }
    }

    return 0;
}
