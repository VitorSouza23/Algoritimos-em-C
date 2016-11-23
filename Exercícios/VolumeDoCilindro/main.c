#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularVolumeCilindro(double altura, double raio){
    return M_PI * (raio * raio) * altura;
}

int main()
{
    double altura, raio;
    printf("Digite a altura do cilindro:\n");
    scanf("%lf*c", &altura);
    printf("Digite o raio do cilindro:\n");
    scanf("%lf*c", &raio);
    printf("Volume do Clilindro: %.2lf", calcularVolumeCilindro(altura,raio));
    return 0;
}
