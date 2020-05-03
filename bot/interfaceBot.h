/// @defgroup Beta Bot
/// As funções aqui são análogas às funções no programa original
/// @defgroup CamadaInterface Interface
/// @ingroup Beta
/// @defgroup ModuloInterface Interface
/// @ingroup CamadaInterface
/// @defgroup CamadaIO IO
/// @ingroup CamadaInterface


#ifndef RASTROS_INTERFACE_H
#define RASTROS_INTERFACE_H
#include <stdio.h>
#include "dados.h"
#include "logicaBot.h"

/// @ingroup ModuloInterface
void imprimir_char(int c, FILE *file);

/// @ingroup ModuloInterface
void mensagem_fimdejogo(ESTADO *e);

/// @ingroup ModuloInterface
void imprime_movs1(FILE *file, int i, int c1, int r1, int c2, int r2);

/// @ingroup ModuloInterface
void imprime_movs2(FILE *file, int i, int c1, int r1);

#endif //RASTROS_INTERFACE_H
