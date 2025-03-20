#include <stdio.h>

int main() {

int curso = 1, alunos, qalunos, disciplina = 1, qdisciplina, aprovados, reprovados, total_cursos = 0, aprovadosfacul = 0, reprovadosfacul = 0;

float nota1, nota2, media, mediadisci, mediacurso = 0, mediafacul, total_media_cursos = 0;

printf("      FACULDADE TECFA\n");

    while (curso <= 2) {
        printf("\n         |Curso %i|\n", curso);
        printf("\nDigite o numero de disciplinas: ");
        scanf("%i", &qdisciplina);
        printf("\nDigite a quantidade de alunos: ");
        scanf("%i", &qalunos);

        mediacurso = 0;
        disciplina = 1;
        int aprovados_curso = 0, reprovados_curso = 0;

        while (disciplina <= qdisciplina) {
            printf("\n---------------------------");
            printf("\n       DISCIPLINA %i", disciplina);
            alunos = 1;
            mediadisci = 0;
            aprovados = 0;
            reprovados = 0;

            while (alunos <= qalunos) {
                printf("\n---------------------------");
                printf("\n\nAluno %i", alunos);
                printf("\n\nDigite a Nota 1: ");
                scanf("%f", &nota1);
                printf("\nDigite a Nota 2: ");
                scanf("%f", &nota2);
                media = (nota1 + nota2) / 2;
                printf("\nMedia: %.2f", media);
                mediadisci = mediadisci + media;
                if (media < 6) {
                    printf("\n\nReprovado");
                    reprovados = reprovados + 1;
                }
                else {
                    printf("\n\nAprovado");
                    aprovados = aprovados + 1;
                }
                alunos = alunos + 1;
            }

            mediadisci = mediadisci / qalunos;
            printf("\n\n---------------------------");
            printf("\n   |INFO. DISCIPLINA %i|", disciplina);
            printf("\n\n       Aprovados: %i\n", aprovados);
            printf("      Reprovados: %i\n", reprovados);
            printf("\n  Media Disciplina %i: %.2f\n", disciplina, mediadisci);

            mediacurso = mediacurso + mediadisci;
            aprovados_curso = aprovados_curso + aprovados;
            reprovados_curso = reprovados_curso + reprovados;

            printf("\n---------------------------");

            disciplina = disciplina + 1;
        }

        mediacurso = mediacurso / qdisciplina;
        printf("\n\nMedia do Curso %i: %.2f\n", curso, mediacurso);
        printf("\nAprovados no Curso %i: %i\n", curso, aprovados_curso);
        printf("\nReprovados no Curso %i: %i\n", curso, reprovados_curso);

        aprovadosfacul = aprovadosfacul + aprovados_curso;

        reprovadosfacul = reprovadosfacul + reprovados_curso;

        total_media_cursos = total_media_cursos + mediacurso;

        total_cursos = total_cursos + 1;

        printf("\n---------------------------\n\n");
        printf("\nPressione ENTER para continuar...");
        getchar();
        getchar();

        curso = curso + 1;
    }

    mediafacul = total_media_cursos / total_cursos;
    printf("\nMedia Final da Faculdade: %.2f\n", mediafacul);
    printf("\nTotal de Aprovados na Faculdade: %i\n", aprovadosfacul);
    printf("\nTotal de Reprovados na Faculdade: %i\n", reprovadosfacul);
    printf("\n");

    return 0;
}
