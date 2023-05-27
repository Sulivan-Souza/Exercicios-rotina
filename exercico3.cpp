/*Faça um procedimento que receba as três notas de um aluno como parâmetros 
e uma letra. Se a letra for A o procedimento calcula a média aritmética das notas 
do aluno, se for P calcula a média ponderada com pesos 5, 3 e 2 respectivamente. 
A média calculada deve ser devolvida ao programa principal para ser mostrada*/

#include <stdio.h>
#include <ctype.h>

float calculoMedia(float n1, float n2, float n3, char casoN);

main()
{
    float nota1, nota2, nota3, mediaF;
    char caso;

    printf("Digite as  tres notas do aluno:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    printf("Para calcular a media Aritmetica digite 'A' ou 'P' para calcular a media Ponderada:\n");
    scanf(" %c", &caso);

    caso = tolower(caso);

    mediaF = calculoMedia(nota1, nota2, nota3, caso);

    printf("A media final : %.2f", mediaF);

}

float calculoMedia(float n1, float n2, float n3, char casoN)
{
    float media;

    switch(casoN)
    {
        case 'a':
        media = (n1 + n2 + n3) / 3;
        break;

        case 'p':
        media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        break;

        default:
        printf("entrada invalido\n");
        break;
    }

    return media;
}