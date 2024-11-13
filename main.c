#include <stdio.h>

int main()
{
    // int result = printf("Sentence to know how many %s\n", "characters were written");
    
    // printf("%d characters were written\n", result);

    // printf("Flag numero: alinha o número à direita, reservando 10 espaços: |%10d|\n", 42); //|        42|
    // printf("Flag -: alinha o número à esquerda, reservando 10 espaços: |%-10d|\n", 42); //|42        |
    // printf("Flag 0: preenche com zeros à esquerda: |%010d|\n", 42); //|0000000042|
    // printf("Flag . float: define 2 casas decimais depois do ponto: %.2f\n", 3.14159); //3.14
    // printf("Flag . int: define no mínimo 5 dígitos no total preenchendo com zeros a esquerda: |%.5d|\n", 42); //|00042|
    // printf("Flag . int: define no mínimo 1 digito no total, exibindo o número de 2 dígito: |%.1d|\n", 42); //|42|
    // printf("Flag . string: define até 3 chars cortando a string; |%.3s|\n", "Hello"); //|Hel|
    // printf("Flag . string: define até 10 chars, assim escreve os 5 chars existentes: |%.10s|\n", "Hello"); //|Hello|
    // printf("Flag # octais: exibe o prefixo adequado (0): |%#o|\n", 42); //|052|
    // printf("Flag # hexadecimais: exibe o prefixo adequado (0x): |%#x|\n", 42); //|0x2a|
    // printf("Flag +: exibe sinal + para numeros positivos: |%+d|\n", 42); //|+42|
    // printf("Flag  : insere espaço no lugar de + para numeros positivos; |% d|\n", 42); //| 42|

    printf("|%-10.2f|\n", 3.14159);
    return (0);
}