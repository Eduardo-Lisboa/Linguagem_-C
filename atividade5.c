#include<stdio.h>
int main(int argc, char const *argv[])
{
    int q1,q2,q3,q4,soma; 

    printf("Digite o tamanho do Primeiro quadrado: ");
    scanf("%d",&q1);

    printf("Digite o tamanho do Segundo quadrado: ");
    scanf("%d",&q2);
    
    printf("Digite o tamanho do Terceiro quadrado: ");
    scanf("%d",&q3);
    
    printf("Digite o tamanho do Quarto quadrado: ");
    scanf("%d",&q4);

    soma =(q1+q1+q1+q1) + (q2+q2+q2+q2) + (q3+q3+q3+q3) + (q4+q4+q4+q4);
    

    printf("A soma total e de: %d",soma);

    
    return 0;
}
