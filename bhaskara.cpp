#include <stdio.h>
#include <math.h>
// Rio de Janeiro, 02/07/2024.
int main() {
    int a, b, c;
    float x1, x2, delta, produto_raizes;

    printf("Este programa calcula as raizes e o produto das raizes de uma equacao quadratica.\n\n");

    // Solicitar os valores de a, b e c ao usuário
    printf("Informe o valor de a: 	");
    scanf("%d", &a);

    printf("Informe o valor de b: 	");
    scanf("%d", &b);

    printf("Informe o valor de c: 	");
    scanf("%d", &c);

    // Calcular o discriminante (delta)
    delta = b * b - 4 * a * c;

    // Calcular as raízes usando a fórmula de Bhaskara
    if (delta >= 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);

        // Calcular o produto das raízes
        produto_raizes = x1 * x2;
		printf("--------------------------------\n");
        // Exibir resultados
        printf("O valor de Delta eh: %.1f\n", delta);
        printf("--------------------------------\n");
		printf("As raizes da equacao sao:\n");
        printf("	x1 = %.2f\n", x1);
        printf("	x2 = %.2f\n", x2);
        printf("--------------------------------\n");
		printf("O produto das raizes x1*x2 eh igual a: %.2f\n", produto_raizes);
    } else {
        printf("A equacao nao possui raizes reais (Delta negativo).\n");
    }

    return 0;
}

