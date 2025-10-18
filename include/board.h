#ifndef BOARD_H
#define BOARD_H

#include "chunk.h"
#define STANDARD_CHUNK_COUNT 9

struct Board{
  struct Chunk board[STANDARD_CHUNK_COUNT/3][STANDARD_CHUNK_COUNT/3];
};

int board_set_node(struct Board *board,struct Node *node, int row, int col);
struct Node *board_get_node(struct Board *board, int row, int col);
struct Board create_board();


#endif // !BOARD_H


