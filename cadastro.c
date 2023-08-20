#include<stdio.h>
main(){
    char nome[50];
    int idade;
    char matricula[15];
    char endereco[20];
    char curso[20];
    char periodo[15];
    char disciplinas[100];
    float mensalidade;
    
    printf("*** Bem vindo! ***  \n");
    printf("*** Cadastro Faculdade ***  \n");
    printf("*** Insira seus cadastros abaixo *** \n ");

    printf("------Nome-----: ");
    fgets(nome,50,stdin);
    fflush(stdin);

    printf("-----Idade-----: ");
    scanf("%d",&idade);
    fflush(stdin);

    printf("---Matricula----: ");
    fgets(matricula,15,stdin);
    fflush(stdin);

    printf("----Endereco-----: ");
    fgets(endereco,20,stdin);

    printf("------Curso-----: ");
    fgets(curso,20,stdin);

    printf("----Periodo-----: ");
    fgets(periodo,15,stdin);

    printf("---Disciplinas--: ");
    fgets(disciplinas,100,stdin);

    printf("---Mensalidade--: R$ ");
    scanf("%d",&mensalidade);
}