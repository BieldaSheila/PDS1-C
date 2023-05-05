#include <stdio.h>

int main() {
    int linhas, colunas;

    // Lê o número de linhas e colunas da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Lê os valores da matriz
    int matriz[linhas][colunas];
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontra o maior elemento da matriz
    int maior = matriz[0][0]; // Assume que o maior valor é o primeiro elemento da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j]; // Atualiza o maior valor se encontrar um valor maior
            }
        }
    }

    printf("O maior elemento da matriz é: %d\n", maior);

    return 0;
}
