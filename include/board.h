#ifndef BOARD_H
#define BOARD_H


#define WIDTH 1024
#define HEIGHT 1024
#define STANDARD_BOARD_SIZE ( (WIDTH) * (HEIGHT) ) 

#include "node.h"

struct Board{
  struct Node *board; 
};

int set_node(struct Board *board,struct Node *node, int row, int col);
struct Node *get_node(struct Board *board, int row, int col);
struct Board create_board();


#endif // !BOARD_H


