#include <stdio.h>
//recebe valores de um vetor e transforma valores negativos e zeros em 1
int main(){
	int x[10];
	int i;
	printf ("Insira no máximo 10 valores para seu vetor, separados por um espaço simples.\n");
	printf ("Após inserir os valores, pressione ENTER.\n");
	for (i = 0; i < 10; i++){
		scanf(" %d",&x[i]);
		if (x[i] == 0 || x[i] < 0){
		    x[i] = 1;
		}
	printf("X[%d] = %d \n",i,x[i]);
	}
	
return 0;
}
//programa preenche vetor
//recebe um valor inteiro e preenche o vetor dobrando o valor a cada casa

#include <stdio.h>

int main(){
	int num;
	int x[10];
	scanf("%d",&num);
	x[0] = num;
	printf("N[0] = %d \n",x[0]);
	for (int i = 1; i < 10; i++){
		x[i] = 2*num;
		num = x[i];
		printf("N[%d] = %d \n",i,x[i]);
	}
return 0;
}

//programa menor valor
//recebe valores inteiros para serem armazenados em um vetor
//imprime o menor valor deste vetor e informa em qual casa ele está armazenado
#include <stdio.h>
int main(){
	int N;
	int i;
	printf("Insira o número de casas que terá o seu vetor (entre 1 e 1000):\n");
	scanf ("%d",&N);
	if (N <= 1 || N >= 1000){
	return 0;
	}
	int vetor[N];
	for (i = 0; i < N; i++){
		scanf("%d",&vetor[i]);
	}
	int	menor = vetor[0];
	int casamenor = 0;
	for (i = 0; i < N; i++){
	    if (vetor[i] < menor){
		menor = vetor[i];
		casamenor = i;
	    }
	}
	printf ("Menor valor = %d \n",menor);
	printf ("Casa de menor valor: %d \n",casamenor);
return 0;
}

// imprime impares e pares
//um vetor recebe 10 valores inteiros e retorna 2 vetores que informam quais valores são pares e quais são ímpares.

#include <stdio.h>

int main() {
    int numeros[10];
    int pares[5];
    int impares[5];
    int numpares = 0;
    int numimpares = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            if (numpares < 5) {
                pares[numpares] = numeros[i];
               numpares++;
            } else {
                
                numpares++;
            }
        } else {
            if (numimpares < 5) {
                impares[numimpares] = numeros[i];
                numimpares++;
            } else {
                numimpares++;
            }
        }
    }
     for (int i = 0; i < numpares; i++) {
        printf("par[%d] = %d\n", i, pares[i]);
        }
    for (int i = 0; i < numimpares; i++) {
        printf("impar[%d] = %d\n", i, impares[i]);
    }

   

    return 0;
}
