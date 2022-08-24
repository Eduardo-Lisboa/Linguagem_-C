#include<stdio.h>

int main(int argc, char const *argv[])
{
    double hora_aula,horas_trabalhadas,salario_bruto, desconto, salario_liquido;

    //coletando dados
    printf("Digite aquio valor da hora aula R$: ");
    scanf("%lf", &hora_aula);

    printf("Digite aqui as horas trabalhadas HR: ");
    scanf("%lf", &horas_trabalhadas);

    //caulculo salario bruto
    salario_bruto = hora_aula * horas_trabalhadas;

    //cauculo desconto inss
    printf("Seu salario bruto e de R$%0.2lf\n", salario_bruto);

    if (salario_bruto <= 2500)
    {
        desconto = salario_bruto * 0.09;
    }
     else
         if ( salario_bruto <= 3615 )
          {
            desconto = salario_bruto * 0.12;
        
         }
            else desconto = salario_bruto * 0.14;

    //desconto do inss
     printf("Desconto inss:%0.2lf\n", desconto);      

    //caulaculo salario liquido
    salario_liquido = salario_bruto - desconto;

    printf("Seu salario liquido e de R$:%0.2lf",salario_liquido);






    

    






    return 0;
}
