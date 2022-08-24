

#include<stdio.h>

int main(int argc, char const *argv[])
{
     
     double salario_min= 0,
     valor_agua = 0,
     valor_conta = 0,
     valor_desconto = 0, 
     valor_Ja_descontado = 0,
     qtdagua = 0;



    printf("Digite o seu salario minimos no mes: ");
    scanf("%lf",&salario_min);
    
    printf("digite a quantidade de litros de  agua gasta no mes: ");
    scanf("%lf",&qtdagua);
    
    valor_agua = (salario_min * 0.02)/1000;
    
    valor_conta = qtdagua * valor_agua;
    
    printf("Sua conta de agua é de %0.2lf \n",valor_conta);
    
    valor_desconto = valor_conta * 0.15;
    
    valor_Ja_descontado= valor_conta - valor_desconto;
    
    printf("valor da conta de agua com desconto de 15% : %0.2lf", valor_Ja_descontado);

    return 0;
}
