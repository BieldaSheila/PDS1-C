#include <stdio.h>
#include <stdlib.h>

int calculaTempoEmSegundos (){
    float d, v;
    printf("Digite a distância percorrida, em metros: ");
    scanf("%f", &d);
    printf("Digite a velocidade do corpo, em m/s: ");
    scanf("%f", &v);
    float t = d/v;
    printf("O corpo percorreu a distância %.2f metros em um intervalo de %.2f segundos\n",d, t);
}

int calculaTempoEmHoras (){
    float d, v;
    printf("Digite a distância percorrida, em kilometros: ");
    scanf("%f", &d);
    printf("Digite a velocidade do corpo, em km/h: ");
    scanf("%f", &v);
    float t = d/v;
    printf("O corpo percorreu a distância %.2f km em um intervalo de %.2f horas\n",d, t);
}




int main (){
    printf("Qual unidade de medida você irá utilizar?\n(digite 'm' para metros, e 'k' para kilometros))\n");
    char unidade [3];
    for (int i = 0; i < 1; i++) {
    scanf("%s",unidade);
    }
    if (unidade[0] == 'm'){
        calculaTempoEmSegundos();
    }
    else if (unidade[0] == 'k'){
        calculaTempoEmHoras();
    }
    else {
        printf("Entrada inválida!  Digite 'm' ou 'k'");
    }
    return 0;
}





