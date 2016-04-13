#include <stdio.h>
#include <stdlib.h>
#include "tela.h"

typedef struct{
	int tamanho;
	unsigned short int cor_peca, move_peca;
	bloco* blocos[];
}peca;

void nova_peca(Tela* tela);
void move_peca_x(peca* peca, int x);
void move_peca_y(peca* peca, int y);