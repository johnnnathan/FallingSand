#include "../include/board.h"
#include <math.h>
#include <stdio.h>

int setNodeBoard(struct Board *board, struct Node *node, int col, int row){

  int total = (STANDARD_CHUNK_SIZE * ((int)STANDARD_CHUNK_COUNT/3))-1;
  if ((row < 0 || row > total) || (col < 0 || col > total)){
    printf("Row: %d or Col: %d out of range for value %d", row, col, STANDARD_CHUNK_SIZE*(STANDARD_CHUNK_COUNT/3));
    return 1;
  }
  int rowChunk = row % STANDARD_CHUNK_SIZE;
  int colChunk = col % STANDARD_CHUNK_SIZE;
  row = (int)floor(row / STANDARD_CHUNK_SIZE);
  col = (int)floor(col / STANDARD_CHUNK_SIZE);

  board->board[row][col].chunk[rowChunk][colChunk] = node;
  return 0;
}


struct Board BoardConstructor(){
  struct Board board;
  struct Chunk* chunkArray[9];
  for (int i = 0; i < 9; i ++){
    struct Chunk chunk = ChunkConstructor();
    board.board[(int) i / 3][i % 3] = chunk;
  }
  return board;
}
struct Node *getNodeBoard(struct Board *board, int col, int row){

  int total = (STANDARD_CHUNK_SIZE * ((int)STANDARD_CHUNK_COUNT/3))-1;

  if ((row < 0 || row > total) || (col < 0 || col > total)){
    printf("Row: %d or Col: %d out of range for value %d", row, col, STANDARD_CHUNK_SIZE*(STANDARD_CHUNK_COUNT/3));
    return (void *)0;
  }

  int rowChunk = row % STANDARD_CHUNK_SIZE;
  int colChunk = col % STANDARD_CHUNK_SIZE;
  row = (int)floor(row / STANDARD_CHUNK_SIZE);
  col = (int)floor(col / STANDARD_CHUNK_SIZE);


  return getNode(&board->board[row][col], colChunk, rowChunk);
}
