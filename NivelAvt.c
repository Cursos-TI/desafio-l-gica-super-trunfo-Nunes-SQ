#include <stdio.h>
#include <string.h>

struct Carta {
    char pais[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

int main() {
    struct Carta carta1 = {"Brasil", 214000000, 8515767.0, 1868000.0, 25};
    struct Carta carta2 = {"Argentina", 45100000, 2780400.0, 487200.0, 15};

    carta1.densidadeDemografica = carta1.populacao / carta1.area;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    int opcao;

    printf("=== SUPER TRUNFO: COMPARAÇÃO ENTRE PAÍSES ===\n\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
            printf("Comparação: População\n");
            printf("%s: %d habitantes\n", carta1.pais, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.pais, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else {
                if (carta2.populacao > carta1.populacao) {
                    printf("Resultado: %s venceu!\n", carta2.pais);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 2:
            printf("Comparação: Área\n");
            printf("%s: %.2f km²\n", carta1.pais, carta1.area);
            printf("%s: %.2f km²\n", carta2.pais, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else {
                if (carta2.area > carta1.area) {
                    printf("Resultado: %s venceu!\n", carta2.pais);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 3:
            printf("Comparação: PIB\n");
            printf("%s: %.2f bilhões USD\n", carta1.pais, carta1.pib);
            printf("%s: %.2f bilhões USD\n", carta2.pais, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else {
                if (carta2.pib > carta1.pib) {
                    printf("Resultado: %s venceu!\n", carta2.pais);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 4:
            printf("Comparação: Pontos Turísticos\n");
            printf("%s: %d pontos\n", carta1.pais, carta1.pontosTuristicos);
            printf("%s: %d pontos\n", carta2.pais, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else {
                if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                    printf("Resultado: %s venceu!\n", carta2.pais);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 5:
            printf("Comparação: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.pais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", carta2.pais, carta2.densidadeDemografica);
            if (carta1.densidadeDemografica < carta2.densidadeDemografica) {
                printf("Resultado: %s venceu (menor densidade)!\n", carta1.pais);
            } else {
                if (carta2.densidadeDemografica < carta1.densidadeDemografica) {
                    printf("Resultado: %s venceu (menor densidade)!\n", carta2.pais);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}