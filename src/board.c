#include "../include/board.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int set_node(struct Board *board, struct Node *node, int col, int row){

  if ((row < 0 || row > HEIGHT - 1) || (col < 0 || col > WIDTH - 1)){
    printf("Row: %d or Col: %d out of range for value %d/%d", row, col, HEIGHT, WIDTH);
    return 1;
  }

  board->board[col + (HEIGHT * row)] = *node;
  return 0;
}


struct Board create_board(){
  struct Board board;
  board.board = malloc(WIDTH*HEIGHT*sizeof(struct Node));
  if (!board.board){
    fprintf(stderr, "FAILED BOARD ALLOCATION\n");
    exit(1);
  }
  return board;
}

struct Node *get_node(struct Board *board, int col, int row){

  if ((row < 0 || row > HEIGHT - 1) || (col < 0 || col > WIDTH - 1)){
    printf("Row: %d or Col: %d out of range for value %d/%d", row, col, HEIGHT, WIDTH);
    return (void *)0;
  }
  return &board->board[col + (HEIGHT * row)];

}
