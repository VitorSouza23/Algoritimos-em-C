#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularDistancia(double x1, double y1, double x2, double y2){
    return sqrt(exp2(x2-x1) + exp2(y2-y1));
}


int main()
{
    double x1, y1, x2, y2;
    printf("Digite o valor de x do ponto A:\n");
    scanf("%d*c", &x1);
    printf("Digite o valor de y do ponto A:\n");
    scanf("%d*c", &y1);
    printf("Digite o valor de x do ponto B:\n");
    scanf("%d*c", &x2);
    printf("Digite o valor de y do ponto B:\n");
    scanf("%d*c", &y2);
    printf("Distância entre os dois pontos: %.2lf", calcularDistancia(x1,y1,x2,y2));

    return 0;
}
