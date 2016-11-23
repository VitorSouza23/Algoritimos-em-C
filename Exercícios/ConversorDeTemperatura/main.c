#include <stdio.h>
#include <stdlib.h>

double converterParaCelcios(double val){
    return ((val / 5) * 9) + 32;
}

double converterParaFah(double val){
    return ((val - 32) / 9) * 5;
}

int main()
{
    int opc;
    double val;
    printf("Digite 1 - Fahrenheit ou 2 - Celsius:\n");
    scanf("%d*c", &opc);
    printf("Digite o valor a ser convertido:");
    scanf("%lf*c", &val);
    if(opc == 1){
        printf("Valor Convertido: %.2lf F", converterParaFah(val));
    }else if(opc == 2){
        printf("Valor Convertido: %.2lf C", converterParaCelcios(val));
    }else{
        printf("Opção inválida!");
    }


    return 0;
}
