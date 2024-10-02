#include "../include/chunk.h"
#include <stdio.h>

int ID = 0;

int setNode(struct Chunk *chunk, struct Node *node, int col, int row){

  if ((col < 0 || col > STANDARD_CHUNK_SIZE)||(row < 0 || row > STANDARD_CHUNK_SIZE)){
    printf("Row: %d or Col: %d out of range for value %d", row, col, STANDARD_CHUNK_SIZE);
    return 1;
  }
  chunk->chunk[row][col] = node;
  return 0;
}

struct Node *getNode(struct Chunk *chunk, int col, int row){

  if ((col < 0 || col > STANDARD_CHUNK_SIZE)||(row < 0 || row > STANDARD_CHUNK_SIZE)){
    printf("Row: %d or Col: %d out of range for value %d", row, col, STANDARD_CHUNK_SIZE);
    return (void *)0;
  }
  return chunk->chunk[row][col];
}

struct Chunk ChunkConstructor(){
  struct Chunk chunk;
  chunk.id = ID;
  for (int i = 0 ; i < STANDARD_CHUNK_SIZE; i++){
    for (int j = 0; j < STANDARD_CHUNK_SIZE; j++) {
       struct Node node = NodeConstructor(AIR, 0, 0, 0); 
      chunk.chunk[i][j] = &node; 
    }
  }

  ID += 1;
  return chunk;
}
