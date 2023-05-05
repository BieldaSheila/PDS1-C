#include <stdio.h>

int main(){
	int x[10];
	int y[10];
	int i;

    	for (i = 0 ; i < 10; i++){

    		// varrendo o vetor x

    		scanf("%d", &x[i]);
    	}

    	for (i = 0 ; i < 10; i++){

    		// atribuindo a y os valores de x invertidos

    		y[i] = x[9 - i];
    	}
    		// imprimindo os valores de y
    	for (i = 0 ; i < 10; i++) {
    		printf("%d", y[i]);
    	}

    	
    printf ("\n");
	   
return 0;
}
