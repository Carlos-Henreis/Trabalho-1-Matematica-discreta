/* 
 * File:   combinatoria.h
 * Author: carlos
 *
 * Created on 25 de Setembro de 2015, 14:19
 */

#include "big_num.h"
#include "manipula_string.h"

#ifndef COMBINATORIA_H
#define	COMBINATORIA_H

void permutacao_r (int num, int *rep, bignum *perm);

void Combinatoria_s (int nl, int np, bignum *resp);

void calculando_com_corretas (int nl, int np, int *rep, bignum *resp);

#endif	/* COMBINATORIA_H */

