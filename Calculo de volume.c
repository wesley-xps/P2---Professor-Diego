#include <stdlib.h>
#include <math.h>

//Determinação do sólido geométrico
int main (void)
{
    int solido;
    float largura, comprimento, altura, raio, volume;
    const float pi = 3.14;

    printf ("========== CALCULO DE VOLUME DOS SOLIDOS GEOMETRICOS ==========\n");
    printf ("Digite a opcao correspondente ao solido que deseja calcular o volume:\n1 - Prima de base retangular;\n2 - Prisma de base triangular;\n3 - Cilindro;\n4 - Cone;\n5 - Piramide.\n");
    scanf ("%i", &solido);

    switch (solido)
    {
        case 1:
        
        printf ("Digite o valor da largura da base: ");
        scanf ("%f", &largura);
        printf ("Digite o valor da comprimento da base: ");
        scanf ("%f", &comprimento);
        printf ("Digite o valor da altura: ");
        scanf ("%f", &altura);
        volume = largura * comprimento * altura;
        printf ("VOLUME = %.3f\n", volume);
        break;
    
        case 2:
        printf ("Digite o valor da largura da base: ");
        scanf ("%f", &largura);
        printf ("Digite o valor da comprimento da base: ");
        scanf ("%f", &comprimento);
        printf ("Digite o valor da altura: ");
        scanf ("%f", &altura);
        volume  = ((largura * comprimento ) / 2) * altura;
        printf ("VOLUME = %.3f\n", volume);
        break;
    
        case 3:
        printf ("Digite o valor do raio: ");
        scanf ("%f", &raio);
        printf ("Digite o valor da altura: ");
        scanf ("%f", &altura);
        volume = pi * pow(raio,2) * altura;
        printf ("VOLUME = %.3f\n", volume);
        break;

        case 4:
        printf ("Digite o valor do raio: ");
        scanf ("%f", &raio);
        printf ("Digite o valor da altura: ");
        scanf ("%f", &altura);
        volume = pi * pow(raio,2) * (altura/3);
        printf ("VOLUME = %.3f\n", volume);
        break;

        case 5:
        printf ("Digite o valor da altura: ");
        scanf ("%f", &altura);
        printf ("Digite o valor do comprimento da base: ");
        scanf ("%f", &comprimento);
        printf ("Digite o valor da largura da base: ");
        scanf ("%f", &largura);
        volume = (comprimento * largura * altura) / 6;
        printf ("VOLUME = %.3f\n", volume);
        break;

        default:
        printf ("Nenhum valor valido foi digitado!");
        break;
    }
    system ("pause");
    return 0;
}


