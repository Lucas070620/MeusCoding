#include <stdio.h>

int main()
{
    float item1, item2, item3, item4;
    float valorTotal, valorComDesconto, valorPorPessoa;
    float desconto;
    int numPagantes;
    

    printf("Informe o preço do primeiro item da pizzaria: ");
    scanf("%f", &item1);

    printf("Informe o preço do segundo item da pizzaria: ");
    scanf("%f", &item2);

    printf("Informe o preço do terceiro item da pizzaria: ");
    scanf("%f", &item3);

    printf("Informe o preço do quarto item da pizzaria: ");
    scanf("%f", &item4);


    valorTotal = item1 + item2 + item3 + item4;

 
    printf("Digite o desconto (em %%): ");
    scanf("%f", &desconto);

 
    valorComDesconto = valorTotal * (1 - desconto / 100);

    printf("\nNovo valor com desconto de %.2f%%: R$ %.2f\n", desconto, valorComDesconto);
   

    printf("Informe a quantidade de pessoas que irão dividir a conta: ");
    scanf("%d", &numPagantes);

    valorPorPessoa = valorComDesconto / numPagantes;

    printf("\nValor total com desconto de %.2f%%: R$ %.2f\n", desconto, valorComDesconto);
    printf("Valor por pessoa: R$ %.2f\n", valorPorPessoa);

    printf("\nMuito Obrigado(a).\n");

    return 0;
}
