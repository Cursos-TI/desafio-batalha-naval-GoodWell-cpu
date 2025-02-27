#include <stdio.h>

int main() {
    // Variaveis
    int naviohorizontal = 0;
    int naviovertical = 2;
    // matriz bidimensional
    char * tabuleiro[5][5] = {
        
        {".", ".", ".", ".", "."}, // Linha 0
        {".", ".", ".", ".", "."}, // Linha 1
        {".", ".", ".", ".", "."}, // Linha 2
        {".", ".", ".", ".", "."}, // Linha 3
        {".", ".", ".", ".", "."}  // Linha 4
    
    };

    // Mostrando as coordenadas
    printf("Coordenadas do navio horizontal:\n"); 
    for (int i = 0; i < 5; i++) {
        printf("(%d, %d)\n", naviohorizontal, i + 1);

    }
    // Mostrando as coordenadas
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) { 
        printf("(%d, %d)\n", naviovertical, i + 1); 

    }



    return 0;

}