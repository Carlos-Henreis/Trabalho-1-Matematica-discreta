#include "manipula_string.h"


//Funcao responsavel por definir a quantidade de letras e de palavras da frase
void define (char *frase, int *nl, int *np){
    int ne =0, tam , i;
    tam = strlen(frase);
    for (i=0; i<tam; i++){
        if (frase[i] == ' ')
            ne +=1;
    }
    *nl = tam -  ne;
    *np = ne + 1;
    return;
}

//Totaliza a quantidade de letras repetidas
int *repeticao (char *frase){
    int *r, i, tam;
    tam = strlen(frase);
    r = (int*)calloc (ALF, sizeof(int));
    if (r == NULL)
        return NULL;
    for (i=0; i<tam; i++){
        if ((int)frase[i] < 97 || (int)frase[i] > 122) {
          printf("Somente letras minusculas\n");
        } else {
            r[(int)frase[i]-97] +=1;
        }
    }
    return r;
}
