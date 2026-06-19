#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto prod;

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", prod.nome);

    printf("Digite o preco: R$ ");
    scanf("%f", &prod.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &prod.quantidade);

    printf("\nNome       : %s\n", prod.nome);
    printf("Preco      : R$ %.2f\n", prod.preco);
    printf("Quantidade : %d\n", prod.quantidade);
    printf("---------------------------------\n");
    printf("Valor total em estoque : R$ %.2f\n", prod.preco * prod.quantidade);

    return 0;
}

