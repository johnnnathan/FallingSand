#include "../include/node.h"
#include "../include/board.h"

int main(int argc, char *argv[])
{
  struct Node node = NodeConstructor(WOOD, 12, 2, 3);
  struct Board board = BoardConstructor();
  setNodeBoard(&board, &node, 100, 50);
  struct Node nodeGotten = *getNodeBoard(&board, 100, 50);
  printNode(&nodeGotten);
} 
