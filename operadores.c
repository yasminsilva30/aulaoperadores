#include<stdio.h>
main(){
    //operador modulo - retorna o resto da divisão de números inteiros

    int numero1, numero2, restoDivisao;

    printf("Digite o primeiro número\n");
    scanf("%d", numero1);
    printf("\nDigite o segundo número\n");
    scanf("%d", numero2);

    restoDivisao = numero1 % numero2;

    printf("Resultado do operador módulo: %d", restoDivisao);

} 