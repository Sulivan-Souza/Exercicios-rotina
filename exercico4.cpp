/*Escreva uma rotina que receba o dia, o mês e o ano de uma data e retorne o dia, 
o mês e o ano do próximo dia. Faça um programa para testar a sua rotina.*/

#include <stdio.h>

int proximoDia(int diaP, int mesP, int anoP);
int proximoMes(int mesP);


int diaMax, mesMax = 12, ano = 0;

main()
{
    int dia = 0, mes = 0, resProxDia = 0;
    
    do
    {
    if(dia > 31)
    {
        printf("Dia invalido, por favor digite uma data valida\n");
    }
    if(mes > 12)
    {
        printf("Mes invalido, por favor digite uma data valida\n");
    }
    if(ano >= 9999)
    { 
        printf("Ano invalido, por favor digite uma data valida\n");
    }

    printf("Digite o dia, mes e ano respectivamente\n");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    } while((dia > 31) || (mes > 12) || (ano >= 9999));

    resProxDia = proximoDia(dia, mes, ano);
}

int proximoDia(int diaP, int mesP, int anoP)
{
    int proxDia;
    
    if(mesP == 1 || mesP == 3 || mesP == 5 || mesP == 7 || mesP == 8 || mesP == 10 || mesP == 12)
    {
        //printf("dia maximo 31\n");
        diaMax = 31;
    }
    else if(mesP == 2)
    {
        if(anoP % 4 == 0)
        {
            //printf("dia maximo 28\n");
            diaMax = 28;
        }
        else
        {
            //printf("dia maximo 29\n");
            diaMax = 29;
        }
    }
    else
    {
        //printf("dia maximo 30\n");
        diaMax = 30;
    }

    if(diaP < diaMax)
    {
        //printf("proximo dia\n");
        diaP++;
    }
    else if(diaP >= diaMax)
    {
        //printf("proximo mes\n");
        diaP = 1;
        mesP = proximoMes(mesP);
    }

    proxDia = printf("o proximo dia sera : %d/%d/%d", diaP, mesP, ano);
    
    return proxDia;
}

int proximoMes(int mesP)
{
    mesP++;

    if(mesP >= mesMax)
    {
        ano++;
        //printf("proximo ano\n");
        mesP = 1;
    }
    return mesP;
}