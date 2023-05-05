#include <stdio.h>

int main() {
    int tamAEDS1, tamCalculo1;

    // Lê o tamanho dos vetores
    printf("Digite o número de alunos em AEDS1:\n");
    scanf("%d", &tamAEDS1);
    printf("Digite o número de alunos em Cálculo1:\n");
    scanf("%d", &tamCalculo1);

    // Lê os números de matrícula dos alunos em AEDS1
    int matriculasAEDS1[tamAEDS1];
    printf("Digite as matrículas dos alunos em AEDS1: ");
    for (int i = 0; i < tamAEDS1; i++) {
        scanf("%d", &matriculasAEDS1[i]);
    }

    // Lê os números de matrícula dos alunos em Cálculo1
    int matriculasCalculo1[tamCalculo1];
    printf("Digite as matrículas dos alunos em Cálculo1: ");
    for (int i = 0; i < tamCalculo1; i++) {
        scanf("%d", &matriculasCalculo1[i]);
    }

    printf("Os alunos matriculados em ambas disciplinas são:\n");
    // Verifica se os números de matrícula estão presentes em ambos os vetores
    for (int i = 0; i < tamAEDS1; i++) {
        for (int j = 0; j < tamCalculo1; j++) {
            if (matriculasAEDS1[i] == matriculasCalculo1[j]) {
                  // Imprime o número de matrícula se estiver presente em ambos os vetores
                printf("%d\n", matriculasAEDS1[i]);
               break; 
            }
        }
    }

    return 0;
}
