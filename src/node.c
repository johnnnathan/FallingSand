#include "../include/node.h"  

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
