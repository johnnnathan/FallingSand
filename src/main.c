#include "../include/node.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  struct Node node = NodeConstructor(WOOD, 12, 123123, 12312312);
  printf("%s\n", getName(&node));
  return 0;
} 
