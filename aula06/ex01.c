#include <stdio.h>

int main() {
    int n, i, acimaMedia = 0;
    float soma = 0, media;

    printf("Digite o numero de alunos: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Numero de alunos invalido.\n");
        return 1;
    }

    // Declarando os vetores com o tamanho informado pelo usuario
    char nomes[n][50]; 
    float notas[n];

    // Leitura dos dados
    for (i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("  Nome: ");
        // O " %49[^\n]" le ate 49 caracteres ou ate o Enter, ignorando o espaco inicial
        scanf(" %49[^\n]", nomes[i]);
        
        printf("  Nota: ");
        scanf("%f", &notas[i]);
        
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / n;

    // Impressão da tabela
    printf("\n--- Boletim da Turma ---\n");
    printf("%-20s | %-5s\n", "Nome", "Nota");
    printf("---------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%-20s | %5.2f\n", nomes[i], notas[i]);
        if (notas[i] > media) {
            acimaMedia++;
        }
    }

    // Resultados finais
    printf("---------------------------\n");
    printf("Media da turma: %.2f\n", media);
    printf("Alunos acima da media: %d\n", acimaMedia);

    return 0;
}



