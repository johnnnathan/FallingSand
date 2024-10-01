#include "../include/chunk.h"

int ID = 0;

void setNode(struct Chunk *chunk, struct Node *node, int col, int row){
  chunk->chunk[row][col] = node;
}

struct Node *getNode(struct Chunk *chunk, int col, int row){
  return chunk->chunk[row][col];
}

struct Chunk ChunkConstructor(){
  struct Chunk chunk;
  chunk.id = ID;
  ID += 1;
  for (int i = 0 ; i < STANDARD_CHUNK_SIZE; i++){
    for (int j = 0; j < STANDARD_CHUNK_SIZE; j++) {
      chunk.chunk[i][j] = (void *)0;
    }
  }
  return chunk;
}
