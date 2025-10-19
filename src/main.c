#include "../include/node.h"
#include "../include/board.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  struct Node node = create_node(WOOD, 12, 2, 3);
  struct Board board = create_board();
  set_node(&board, &node, 100, 50);
  struct Node nodeGotten = *get_node(&board, 100, 50);
  print_node(&nodeGotten);
} 
