#include "../include/node.h"
#include "../include/chunk.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  struct Node node = NodeConstructor(WOOD, 12, 2, 3);
  printf("%s\n", getName(&node));
  struct Chunk chunk = ChunkConstructor();
  setNode(&chunk, &node, 0, 0);
  struct Node *gotNode = getNode(&chunk, 0, 0);
  printf("%s\n", getName(gotNode));
  printf("\n");
} 
