#include <stdio.h>

struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    struct Aluno turma[n];
    float soma = 0.0;

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", turma[i].nome);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);

        soma += turma[i].nota;
    }

    float media = soma / n;

    int acimaDaMedia = 0;
    for (int i = 0; i < n; i++) {
        if (turma[i].nota > media) {
            acimaDaMedia++;
        }
    }

    printf("\n--- BOLETIM DA TURMA ---\n");
    printf("%-20s %-5s\n", "Nome", "Nota");
    printf("-------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s %.2f\n", turma[i].nome, turma[i].nota);
    }
    printf("-------------------------\n");

    printf("Media da turma: %.2f\n", media);
    printf("Alunos acima da media: %d\n", acimaDaMedia);

    return 0;
}
