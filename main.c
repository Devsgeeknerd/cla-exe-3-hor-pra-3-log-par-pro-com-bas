#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração e inicialização da variável que armazenará a quantidade de elementos da sequência.
    int quantidadeElementos = 0;
    printf("Digite o numero de elementos da sequencia: ");
    // Recebe a entrada do usuário para o número de elementos.
    scanf("%d", &quantidadeElementos);

    // Inicialização das variáveis necessárias para gerar a sequência de Fibonacci.
    int numeroAtual = 1;
    printf("Sequencia gerada: \n");
    // Imprime o primeiro número da sequência.
    printf("%d", numeroAtual);

    int numeroAnterior = 0;
    int i = 0;
    int temporario = 0;

    // Loop para gerar os elementos da sequência de Fibonacci.
    for (i = 1; i < quantidadeElementos; i++)
    {
        // Troca de valores para calcular o próximo número na sequência.
        temporario = numeroAtual;
        numeroAtual = numeroAtual + numeroAnterior;
        numeroAnterior = temporario;

        // Imprime o número atual na sequência.
        printf("%d ", numeroAtual);
    }

    return 0;
}
