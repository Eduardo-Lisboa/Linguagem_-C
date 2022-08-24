#include<stdio.h>

int main(int argc, char const *argv[])
{
    double dolar,real;
    
    printf("Quantos dalares voce tem? US$:");
    scanf("%lf", &dolar);

    real = dolar * 5.14;

    printf("Voce tem R$:%0.2lf",real);

    
    





    return 0;
}