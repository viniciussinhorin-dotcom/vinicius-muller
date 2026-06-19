#include <stdio.h>

struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    int n, acima = 0, mai = 0, men = 0;
    float soma = 0;

    printf("Total de alunos: ");
    scanf("%d", &n);
    struct Aluno t[n];

    for (int i = 0; i < n; i++) {
        printf("Nome e nota %d: ", i + 1);
        scanf(" %[^\n] %f", t[i].nome, &t[i].nota);
        soma += t[i].nota;
    }

    float med = soma / n;

    for (int i = 0; i < n; i++) {
        if (t[i].nota > med) acima++;
        if (t[i].nota > t[mai].nota) mai = i;
        if (t[i].nota < t[men].nota) men = i;
        printf("%s: %.1f\n", t[i].nome, t[i].nota);
    }

    printf("\nMedia: %.1f\nAcima: %d\n", med, acima);
    printf("Maior: %s (%.1f)\nMenor: %s (%.1f)\n", t[mai].nome, t[mai].nota, t[men].nome, t[men].nota);

    return 0;
}
