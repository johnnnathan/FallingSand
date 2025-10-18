#include "../include/node.h"  
#include <stdio.h>

float get_density(struct Node *node){
  return node->density;
}


//Get the ascii representation of the name of the material, should not be used often.
char* get_name(struct Node *node){
  char* name;
  int name_code = node->name;
  switch (name_code) {
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

float get_dy(struct Node *node){
  return node->ySpeed;
}

float get_dx(struct Node *node){
  return node->xSpeed;
}


struct Node create_node(enum Name name, float dens, float xSp, float ySp){
  struct Node node;
  node.name = name;
  node.density = dens;
  node.xSpeed = xSp;
  node.ySpeed = ySp;
  return node;
}
void print_node(struct Node *node) {
    // Get the node's name using the getName function
    char* name = get_name(node);

    // Print the node's properties
    printf("Node Information:\n");
    printf("Name: %s\n", name);
    printf("Density: %.2f\n", node->density);
    printf("X Speed: %.2f\n", node->xSpeed);
    printf("Y Speed: %.2f\n", node->ySpeed);
}
