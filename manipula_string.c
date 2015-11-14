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
        if (frase[i] == 'a')
            r[0] +=1;
        else{
            if (frase[i] == 'b')
                r[1] +=1;
            else{
                if (frase[i] == 'c')
                        r[2] +=1;
                else{
                    if (frase[i] == 'd')
                            r[3] +=1;    
                    else{
                        if (frase[i] == 'e')
                            r[4] +=1;
                        else{
                            if (frase[i] == 'f')
                                r[5] +=1;  
                            else{
                                if (frase[i] == 'g')
                                    r[6] +=1;
                                else{
                                    if (frase[i] == 'h')
                                        r[7] +=1;                            
                                    else{
                                        if (frase[i] == 'i')
                                            r[8] +=1;
                                        else{
                                            if (frase[i] == 'j')
                                                r[9] +=1;
                                            else{
                                                if (frase[i] == 'k')
                                                    r[10] +=1;                            
                                                else{
                                                    if (frase[i] == 'l')
                                                        r[11] +=1;
                                                    else{
                                                        if (frase[i] == 'm')
                                                            r[12] +=1;
                                                        else{
                                                            if (frase[i] == 'n')
                                                                r[13] +=1;
                                                            else{
                                                                if (frase[i] == 'o')
                                                                    r[14] +=1;
                                                                else{
                                                                    if (frase[i] == 'p')
                                                                        r[15] +=1;
                                                                    else{
                                                                        if (frase[i] == 'q')
                                                                            r[16] +=1;
                                                                        else{
                                                                            if (frase[i] == 'r')
                                                                                r[17] +=1;
                                                                            else{
                                                                                if (frase[i] == 's')
                                                                                    r[18] +=1;
                                                                                else{
                                                                                    if (frase[i] == 't')
                                                                                        r[19] +=1;
                                                                                    else{
                                                                                        if (frase[i] == 'u')
                                                                                            r[20] +=1;
                                                                                        else{
                                                                                            if (frase[i] == 'v')
                                                                                                r[21] +=1;  
                                                                                            else{
                                                                                                if (frase[i] == 'w')
                                                                                                    r[22] +=1;
                                                                                                else{
                                                                                                    if (frase[i] == 'x')
                                                                                                        r[23] +=1;
                                                                                                    else{
                                                                                                        if (frase[i] == 'y')
                                                                                                            r[24] +=1;
                                                                                                        else
                                                                                                                if (frase[i] == 'z')
                                                                                                                    r[25] +=1;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return r;
}