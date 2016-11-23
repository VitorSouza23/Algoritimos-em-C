#include <stdio.h>
#include <stdlib.h>

double calcularForca(double massa, double aceleracao){
    return massa * aceleracao;
}

int main()
{
    double massa, aceleracao;
    printf("Digite a massa do objeto:\n");
    scanf("%lf*c", &massa);
    printf("Digite a aceleração do objeto:\n");
    scanf("%lf*c", &aceleracao);
    printf("Força exercida: %.2lf", calcularForca(massa,aceleracao));
    return 0;
}
