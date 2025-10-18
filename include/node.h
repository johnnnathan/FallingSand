#ifndef NODE_H
#define NODE_H

#include "namesEnum.h"

struct Node{
  enum Name name;
  float density;
  float xSpeed;
  float ySpeed;
};


void print_node(struct Node *node);
float get_density(struct Node *node);
char* get_name(struct Node *node);
float get_dy(struct Node *node);
float get_dx(struct Node *node);
struct Node create_node(enum Name name, float dens, float xSp, float ySp);


#endif // !NODE_H
