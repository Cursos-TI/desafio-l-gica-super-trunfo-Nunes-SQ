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

    int op1, op2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("=== SUPER TRUNFO: COMPARAÇÃO COM DOIS ATRIBUTOS ===\n\n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &op1);
    printf("\n");

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != op1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &op2);
    printf("\n");

    if (op1 == op2 || op1 < 1 || op1 > 5 || op2 < 1 || op2 > 5) {
        printf("Erro: atributos inválidos ou repetidos.\n");
        return 1;
    }

    printf("Comparação entre %s e %s\n\n", carta1.pais, carta2.pais);

    for (int i = 1; i <= 2; i++) {
        int attr = (i == 1) ? op1 : op2;
        printf("Atributo %d: ", i);
        switch (attr) {
            case 1:
                printf("População\n");
                valor1_carta1 = (i == 1) ? carta1.populacao : valor1_carta1;
                valor1_carta2 = (i == 1) ? carta2.populacao : valor1_carta2;
                valor2_carta1 = (i == 2) ? carta1.populacao : valor2_carta1;
                valor2_carta2 = (i == 2) ? carta2.populacao : valor2_carta2;
                printf("%s: %d\n", carta1.pais, carta1.populacao);
                printf("%s: %d\n\n", carta2.pais, carta2.populacao);
                break;
            case 2:
                printf("Área\n");
                valor1_carta1 = (i == 1) ? carta1.area : valor1_carta1;
                valor1_carta2 = (i == 1) ? carta2.area : valor1_carta2;
                valor2_carta1 = (i == 2) ? carta1.area : valor2_carta1;
                valor2_carta2 = (i == 2) ? carta2.area : valor2_carta2;
                printf("%s: %.2f\n", carta1.pais, carta1.area);
                printf("%s: %.2f\n\n", carta2.pais, carta2.area);
                break;
            case 3:
                printf("PIB\n");
                valor1_carta1 = (i == 1) ? carta1.pib : valor1_carta1;
                valor1_carta2 = (i == 1) ? carta2.pib : valor1_carta2;
                valor2_carta1 = (i == 2) ? carta1.pib : valor2_carta1;
                valor2_carta2 = (i == 2) ? carta2.pib : valor2_carta2;
                printf("%s: %.2f\n", carta1.pais, carta1.pib);
                printf("%s: %.2f\n\n", carta2.pais, carta2.pib);
                break;
            case 4:
                printf("Pontos Turísticos\n");
                valor1_carta1 = (i == 1) ? carta1.pontosTuristicos : valor1_carta1;
                valor1_carta2 = (i == 1) ? carta2.pontosTuristicos : valor1_carta2;
                valor2_carta1 = (i == 2) ? carta1.pontosTuristicos : valor2_carta1;
                valor2_carta2 = (i == 2) ? carta2.pontosTuristicos : valor2_carta2;
                printf("%s: %d\n", carta1.pais, carta1.pontosTuristicos);
                printf("%s: %d\n\n", carta2.pais, carta2.pontosTuristicos);
                break;
            case 5:
                printf("Densidade Demográfica\n");
                valor1_carta1 = (i == 1) ? carta1.densidadeDemografica : valor1_carta1;
                valor1_carta2 = (i == 1) ? carta2.densidadeDemografica : valor1_carta2;
                valor2_carta1 = (i == 2) ? carta1.densidadeDemografica : valor2_carta1;
                valor2_carta2 = (i == 2) ? carta2.densidadeDemografica : valor2_carta2;
                printf("%s: %.2f\n", carta1.pais, carta1.densidadeDemografica);
                printf("%s: %.2f\n\n", carta2.pais, carta2.densidadeDemografica);
                break;
            default:
                printf("Erro.\n");
                return 1;
        }
    }

    float parcial1 = (op1 == 5) ? 
        (valor1_carta1 < valor1_carta2 ? 1 : (valor1_carta1 > valor1_carta2 ? -1 : 0)) :
        (valor1_carta1 > valor1_carta2 ? 1 : (valor1_carta1 < valor1_carta2 ? -1 : 0));

    float parcial2 = (op2 == 5) ? 
        (valor2_carta1 < valor2_carta2 ? 1 : (valor2_carta1 > valor2_carta2 ? -1 : 0)) :
        (valor2_carta1 > valor2_carta2 ? 1 : (valor2_carta1 < valor2_carta2 ? -1 : 0));

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("Soma dos valores:\n");
    printf("%s: %.2f\n", carta1.pais, soma1);
    printf("%s: %.2f\n\n", carta2.pais, soma2);

    if (soma1 > soma2) {
        printf("Resultado: %s venceu a rodada!\n", carta1.pais);
    } else if (soma2 > soma1) {
        printf("Resultado: %s venceu a rodada!\n", carta2.pais);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}