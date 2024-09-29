#ifndef CHUNK_H
#define CHUNK_H

#include "node.h"
const int STANDARD_CHUNK_SIZE = 64;

struct Chunk {
  struct Node* chunk[STANDARD_CHUNK_SIZE][STANDARD_CHUNK_SIZE];
};


#endif // !CHUNK_H
