#include<stdio.h>

int main(int argc, char const *argv[])
{
    float raio,c;
    //recebendo o dadso para ser calculado
    printf("Digite o raio da circuferencia que deseja medir: ");
    scanf("%F", &raio);
    //oepração
    c = 3.14 * pow(raio,2);
    //resposta
    printf("O circuferencia e de %0.2f",c);



    return 0;
}
