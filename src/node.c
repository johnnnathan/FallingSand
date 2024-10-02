#include "../include/node.h"  
#include <stdio.h>

float getDensity(struct Node *node){
  return node->density;
}


char* getName(struct Node *node){
  int nameCode = node->name;
  char* name;
  switch (nameCode) {
    case 0:
      name = "air";
      break;
    case 1:
      name = "water";
      break;
    case 2:
      name = "wood";
      break;
    case 3:
      name = "stone";
      break;
    default:
      name = "Error";
  }
  return name;
}

float getYSpeed(struct Node *node){
  return node->ySpeed;
}

float getXSpeed(struct Node *node){
  return node->xSpeed;
}


struct Node NodeConstructor(enum Name name, float dens, float xSp, float ySp){
  struct Node node;
  node.name = name;
  node.density = dens;
  node.xSpeed = xSp;
  node.ySpeed = ySp;
  return node;
}
void printNode(struct Node *node) {
    // Get the node's name using the getName function
    char* name = getName(node);

    // Print the node's properties
    printf("Node Information:\n");
    printf("Name: %s\n", name);
    printf("Density: %.2f\n", node->density);
    printf("X Speed: %.2f\n", node->xSpeed);
    printf("Y Speed: %.2f\n", node->ySpeed);
}
