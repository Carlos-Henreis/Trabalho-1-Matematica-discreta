#include "combinatoria.h"


//Funcao responsavel por fazer a permutacao com repeticao
void permutacao_r (int num, int *rep, bignum *perm){
    bignum n, r, aux, fat;
    int i;
    int_to_bignum (1,&n);
    fatorial_bignum(num, &fat);
    for (i=0; i<ALF; i++){
       
        fatorial_bignum(rep[i], &r);
        multiply_bignum(&r, &n, &aux);
        n = aux;
    }
    divide_bignum(&fat, &n, perm); 
}

//Funcao responsavel por fazer uma permutacao simples
void Combinatoria_s (int a, int b, bignum *resp){
    
    bignum d, f1, f2 ,f3;
    fatorial_bignum(a, &f1);
    fatorial_bignum(b, &f2);
    fatorial_bignum(a-b, &f3);
    multiply_bignum(&f2, &f3, &d);
    divide_bignum(&f1, &d, resp); 
}

//A funcao calculando_com_corretas calcula qual é o numero de combianacoes exatas
void calculando_com_corretas (int nl, int np, int *rep, bignum *resp){
    bignum a,b, d, e;
    permutacao_r (nl, rep, &d);
    Combinatoria_s (nl-1,  np-1, &e);
    multiply_bignum(&d, &e, resp);
    
}