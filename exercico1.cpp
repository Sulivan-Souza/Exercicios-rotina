/*Faça uma função que receba três números inteiros: a, b e c, 
onde a é maior que 1. A função deve somar todos os inteiros entre b e c 
que sejam divisíveis por a (inclusive b e c) e retorne o resultado para a função principal.*/

#include <stdio.h>
#include <stdlib.h>


int somadivisores (int a,int b,int c){
    int maior,menor,i,soma = 0;

    if(b<c){
        menor = b;
        maior = c;
    }else{
        menor = c;
        maior = b;
    }
    for (i = menor;i <= maior; i++){
        if(i%a==0){
            soma = soma +i;
        }
    }
    return soma;
}

    main()
    {
        int a,b,c;
        
        printf("Digite o primeiro valor: ");
        scanf("%d",&a);
        printf("Digite o segundo valor: ");
        scanf("%d",&b);
        printf("Digite o terceiro valor: ");
        scanf("%d",&c);
        int total = somadivisores(a,b,c);
        printf("Total %d ", total);
    }
