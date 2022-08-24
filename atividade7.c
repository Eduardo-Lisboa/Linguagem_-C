#include<stdio.h>

int main(int argc, char const *argv[])
{
    double febre;

    printf("-------------------------------------\n");
    printf("-------------MEDICO ONLINE-----------\n");
    printf("-------------------------------------\n");

    printf("Digite aqui sua temperatura:");
    scanf("%lf", &febre);

    if (febre >= 37.5)
    {
        printf("O PACIENTE ESTA COM FEBRE!\n");
    }
    else 
        if (febre >=40 )
        {
            printf("FEBRE ALTA!\n");
        }
        else 
            if (febre <37)
            {
                printf("FEBRE BAIXA\n!");
            }
            else
                if (febre >= 40 || febre <= 38)
                {
                    printf("FEBRE MEDIA!\n");
                }
                
    printf("------------------\n");
    printf("CUIDE-SE SEMPRE <3\n");
    printf("-------------------\n");
    
    return 0;
}
