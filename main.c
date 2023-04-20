//Defina una funcion que calcule la longitud de una cadena de caracteres.
#include <stdio.h>
#include <string.h>

int longitud (char *cadena)
{
    int n;
    n = strlen(cadena);
    return n;
}

int main() {
    char texto [30];
    int largo;
    printf("Ingrese un texto:\n");
    gets (texto);
    largo = longitud (texto);
    printf ("El largo del la cadena es %d.",largo);
    return 0;
}
