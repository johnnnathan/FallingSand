#ifndef BOARD_H
#define BOARD_H

#include "chunk.h"
#define STANDARD_CHUNK_COUNT 9

struct Board{
  struct Chunk board[STANDARD_CHUNK_COUNT/3][STANDARD_CHUNK_COUNT/3];
};

int setNodeBoard(struct Board *board,struct Node *node, int row, int col);
struct Node *getNodeBoard(struct Board *board, int row, int col);
struct Board BoardConstructor();


#endif // !BOARD_H


