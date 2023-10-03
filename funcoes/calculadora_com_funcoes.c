#include <stdio.h>

//versao complexa

// int soma(){ // a funcao soma vai retornar um valor do tipo int
//     // implementação
//     int valor1;
//     int valor2;
//     int soma;
//     printf("Insira os valores:\n");
//     printf("Valor 1:\n");
//     scanf("%d", &valor1);
//     printf("Valor 2:\n");
//     scanf("%d", &valor2);
//     soma = valor1 + valor2;
//     return soma;
// }


//funcao mais comum
int somar(int a, int b){ // a funcao soma vai retornar um valor do tipo int
    // implementação
    somar = a + b;
    return soma;
}

int subtrai(int a, int b){
    return = a - b;
}


int main(){

    char operacao;

    printf("Insira a operacao: \n");
    scanf("%c", &operacao);

    int valor1, valor2, resultado;
     
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);

    if(operacao == '+'){
        int resultado = soma(valor1, valor2);
        printf("resultado: %d\n", resultado);
    } else if(operacao == '-'){
        int resultado = subtrai(valor1, valor2);
        printf("resultado: %d\n", resultado);
    }

    return 0;
}
