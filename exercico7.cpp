/*Deseja-se calcular a conta de consumo de energia elétrica de N consumidor. 
Para isso, escreva um programa que leia o código do consumidor, o 
preço do KW e a quantidade de KW consumido. Através de uma função calcule o 
total a pagar e mostre o resultado.
Total a pagar = preço * quantidade
Total a pagar mínimo = R$11,20*/

#include <stdio.h>

float precoEnergia(float precoKWh, float quantidade);

main()
{
    float custoKWh, quantKW, total;
    int codigo;

    printf("Digite o codigo do cliente: ");
    scanf("%d", &codigo);

    printf("Digite o preco do KWh: ");
    scanf("%f", &custoKWh);

    printf("Digite a quantidade de KW consumidos: ");
    scanf("%f", &quantKW);

    total = precoEnergia(custoKWh, quantKW);

    printf("A conta total do cliente com codigo %d e: %.2f", codigo, total);
}

float precoEnergia(float precoKWh, float quantidade)
{
    float resultado;

    resultado = precoKWh * quantidade;

    if(resultado < 11.20)
    {
        resultado = 11.20;
    }

    return resultado;
}