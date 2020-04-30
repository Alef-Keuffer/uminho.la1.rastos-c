#ifndef RASTROS_ACESSAR_ESTADO_H
#define RASTROS_ACESSAR_ESTADO_H
#include "dados.h"

int obter_casa (ESTADO *e, int row, int col);
int JogadorAtual (ESTADO *e);
int obter_subcoordenadas (ESTADO *e, int jogada, int jogador, int info);
int NumJogadas(ESTADO *e);
COORDENADA obter_ultimajogada(ESTADO *e);

#endif //RASTROS_ACESSAR_ESTADO_H
