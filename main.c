/*  Algoritmo desenvolvido por Carlos Henrique Reis
*   Criado para a resolução do trabalho 1 de Matematica Discreta elaborado pelo professor Renato Klippert
*   Universidade Federal de Itajuba - UNIFEI - Bacharelado em Ciencia da Computacao - 2015 - 2 Semestre
*   Matricula: 30415
*
*   Para o tratamento dos números gigantes (bignum) é ultilizado uma biblioteca externa e está disponível
*   em http://www3.cs.stonybrook.edu/~skiena/392/programs/bignum.c
*
*   A resolução do problema consiste em ler um conjunto de caracteres (Frase) e determinar qual é o número de combinações corretas;
*   Matematicamente a solução do problema é : Pr (nl)* C(nl -1) tomadas em (nl-1), onde nl = numero de letras e np = numero de palavras
*/






#include "combinatoria.h"

int main(){
    //declaração das variáveis
    int i, ch, nl, np;
    int *Rep = NULL;
    bignum perm;
    char frase[MAXDIGITS];
    //Armazenado a frase digitada pelo usário
    printf ("Por favor digite a frase desejada\n");
    scanf (" %[^\n]", frase);
    //A função define, define a quantidade de letras e de palavras contidas na frase,  e as armazenas em nl e np respectivamente
    define (frase, &nl, &np);
    //A função reteptição armazena a quantidade de vezes que as letras (a-z) forma repetidas armazenado em um vetor
    Rep = repeticao (frase);
    //Controle caso a locação de memórias do vetor não for bem sucedida
    if (!Rep){
        printf ("Ocorreu um erro estranho\n");
        return 0;
    }   
    //Imprime os dados obitidos
    printf("----------------\n");
    printf ("A frase digitada foi: %s\n", frase);
    printf ("Ela possui %d letras e %d palavras\n", nl, np);
    printf("----------------\n");
    printf ("Letras repetidas\n");
    for (i=0; i<ALF; i++){
        ch = 97;
        if (Rep[i] != 0){
            printf("%c -> %d repeticoes\n",ch+i, Rep[i]);
        }
    }
    printf("----------------\n");
    //A funcao calclando_com_corretas calcula qual é o numero de combianacoes exatas
    calculando_com_corretas ( nl,  np, Rep, &perm);
    printf ("A frase digitada pode ser escrita de ");
    //Exibindo o resultado
    print_bignum (&perm);
    printf ("maneiras\n");
    //FIM DO PROGRAMA
    return 0;
}