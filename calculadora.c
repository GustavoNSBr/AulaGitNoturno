#include <stdio.h>

// COMENTARIOS DA AULA NO FINAL DO CODIGO

int main(){
    int valor1;
    int valor2;
    int resultado;
    char operacao;

    printf("Insira a operacao: \n");
    scanf("%c", &operacao);

    printf("Insira os valores:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);

    if(operacao == '+'){
        printf("resultado: %d\n", valor1 + valor2;)
    } else if (operacao == '-'){
        printf("resultado: %d\n", valor1 - valor2;)
    } else if (operacao == '*'){
        printf("resultado: %d\n", valor1 * valor2;)
    } else if (operacao == '/'){
        printf("resultado: %d\n", valor1 / valor2;)
    }else if (operacao == '%'){
        printf("resultado: %d\n", valor1 % valor2;)
    }

    printf("Resultado %d\n", resultado);
    printf("operacao %c\n", operacao);

    return 0;
}



// "+" -> string
// '+' -> char



    // Soma: resultado = valor1 + valor2;
    // Subtração: resultado = valor1 - valor2;
    // Multiplicão: resultado = valor1 * valor2;
    // Divisão: resultado = valor1 / valor2;
    // Resto da Divisao: resultado = valor1 % valor2; // usar pra achar numero primos e restos de divisoes
    // Incremento: valor1 = valor1 + 1; ou valor1++; // adiciona 1 na variavel
    // Decremento: valor1 = valor1 - 1; ou valor--; // remove 1 na variavel