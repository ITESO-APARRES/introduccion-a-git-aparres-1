#include <stdio.h>

int main(void) {
    decirHola("Juan");
    return 0;
}

void decirHola(char* nombre) {
    printf("Hola %s, ¿como estas?", nombre);
}
