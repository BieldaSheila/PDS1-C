#include <stdio.h>

//função verifica primo
int Primo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
// função soma primos
int somaPrimos(int N){

	int soma = 0;
	int num = 2;
	int i = 0;
	while (i < N){
			if (Primo(num)){
	 	   soma += num;
	 	   i++;
	 		}
	 	num++;  
	 	}
 	return soma;
}

//
int main(){
    int N;
    while(scanf("%d", &N) == 1){;
    printf ("%d",somaPrimos(N));
}
return 0;
    
}