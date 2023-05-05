//Programa para inserir dados de, no máximo, 4 pessoas

#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 4
#define MAX_NOME 50


typedef struct {
    char nome[MAX_NOME];   
    unsigned int idade;
    unsigned int numero;
    float salario;
} Pessoa;

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    int num_pessoas = 0;
    char operacao;
    printf("Digite 'i' para inserir um registro e 'm' para mostrar um registro:\n");
    while (scanf(" %c", &operacao) == 1) {
        if (operacao == 'i') {
            if (num_pessoas == MAX_PESSOAS) {
                printf("Espaco insuficiente\n");
                continue;
            }

            Pessoa nova_pessoa;
            printf ("Escreva o nome, idade e salário da pessoa, separados por um espaço simples:\n");
            scanf("%s %u %f", nova_pessoa.nome, &nova_pessoa.idade, &nova_pessoa.salario);

            pessoas[num_pessoas] = nova_pessoa;
            num_pessoas++;

            printf("Pessoa inserida com sucesso\n");
            printf("Digite 'i' para inserir um registro e 'm' para mostrar um registro:\n");

        } else if (operacao == 'm') {
            char nome_busca[MAX_NOME];
            printf("Digite o nome da pessoa que deseja consultar o registro:\n");
            scanf("%s", nome_busca);

            int encontrado = 0;
            for (int i = 0; i < num_pessoas; i++) {
                if (strcmp(pessoas[i].nome, nome_busca) == 0) {
                    printf("%s, %u anos, R$ %.2f inserido\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario);
                    encontrado = 1;
                    printf("Digite 'i' para inserir um registro e 'm' para mostrar um registro:\n");
                }
            }

            if (!encontrado) {
                printf("Registro ausente\n");
            printf("Digite 'i' para inserir um registro e 'm' para mostrar um registro:\n");
            }

        } else {
            break;
        }
    }

    return 0;
}