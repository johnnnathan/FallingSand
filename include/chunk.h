#ifndef CHUNK_H
#define CHUNK_H

#include "node.h"

#define STANDARD_CHUNK_SIZE 64

struct Chunk {
  int id;
  struct Node* chunk[STANDARD_CHUNK_SIZE][STANDARD_CHUNK_SIZE];
};

struct Chunk create_chunk();
int chunk_set_node(struct Chunk *chunk, struct Node *node, int col, int row);
struct Node *chunk_get_node(struct Chunk *chunk, int col, int row);

#endif // !CHUNK_H
