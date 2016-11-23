#include <stdio.h>
#include <stdlib.h>

long fatorial(int num){
    long fat = 1;
    int i;
    for(i = 1; i <= num; i++){
        fat = fat * i;
    }
    return fat;
}

int main()
{
    int num;
    printf("Digite um número:\n");
    scanf("%d*c", &num);
    printf("Fatorial: %ld", fatorial(num));
    return 0;
}
