

// prova 28/11/2022
// EXERCICIO 3

/*Faça uma rotina que receba dois números e calcule a soma, a subtração,
 a multiplicação e a divisão desses números. O cálculo só deve ser feito 
 se o primeiro número for maior ou igual ao segundo, senão retorne um erro. 
 Faça um programa para testar a rotina. */


#include <stdio.h>


int calculo(int num1, int num2);

main()

{
    
    int a = 0 , b = 0, res = 0;

    do
    {
        if(a < b)
        {
        printf("O primeiro numero digitado e menorq q segundo numero\n Digite outro\n");
        }

        printf("Digite os valores dos numeros:\n");
        scanf("%d", &a);
        scanf("%d", &b);

    } while (a >= b);

    printf("Os Calculos do numero %d e %d : \n", a, b);
    res = calculo(a, b);
    
}

int calculo(int num1, int num2)
{   
    int soma, subtracao, multiplicacao, divisao, resultado;

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    resultado = printf("\nsoma :%d, \nsubtracao :%d,\nmultiplicacao :%d,\ndivisao :%d", soma, subtracao, multiplicacao, divisao);

    return resultado;
}