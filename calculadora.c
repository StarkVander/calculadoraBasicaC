#include <stdio.h>
#include <stdlib.h>

// Funções para operações aritméticas
float adicionar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char operador;

    // Exibir instruções
    printf("Calculadora Básica\n");
    printf("Operações disponíveis: +, -, *, /\n");
    printf("Digite na forma: número operador número (exemplo: 5 + 3)\n");

    // Ler entrada do usuário
    printf("Digite sua operação: ");
    scanf("%f %c %f", &num1, &operador, &num2);

    // Realizar operação com base no operador fornecido
    switch (operador) {
        case '+':
            printf("Resultado: %.2f\n", adicionar(num1, num2));
            break;
        case '-':
            printf("Resultado: %.2f\n", subtrair(num1, num2));
            break;
        case '*':
            printf("Resultado: %.2f\n", multiplicar(num1, num2));
            break;
        case '/':
            printf("Resultado: %.2f\n", dividir(num1, num2));
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }

    return 0;
}
