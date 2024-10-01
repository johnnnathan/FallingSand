#ifndef CHUNK_H
#define CHUNK_H

#include "node.h"

#define STANDARD_CHUNK_SIZE 64

struct Chunk {
  int id;
  struct Node* chunk[STANDARD_CHUNK_SIZE][STANDARD_CHUNK_SIZE];
};

struct Chunk ChunkConstructor();
void setNode(struct Chunk *chunk, struct Node *node, int col, int row);
struct Node *getNode(struct Chunk *chunk, int col, int row);

#endif // !CHUNK_H
