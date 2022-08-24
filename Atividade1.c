

#include<stdio.h>


int main()


{

    int idade;
    char gen;


//pegando os dados
    printf("Por favor digite sua idade: ");
    scanf("%d",&idade);

    printf("Qual seu sexo [M/F]: ");
    scanf("%c", &gen);
    
//mostrando os dados coletados anteriormente
    printf("Sua idade: %d\n",idade);
    printf("Seu sexo: %c\n",gen);



    return 0;
}

