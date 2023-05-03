#include <stdio.h>

struct EstudanteDaPuc {
    char* nome;
    int notaemaeds;
}
joao = {"Joao Vaz", 100}, *ptr = &joao;

int main() {
    printf("O estudante %s tem %d nota em AEDS\n", ptr->nome, (*ptr).notaemaeds);
}
