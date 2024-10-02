#ifndef NODE_H
#define NODE_H

#include "namesEnum.h"

struct Node{
  enum Name name;
  float density;
  float xSpeed;
  float ySpeed;
};


void printNode(struct Node *node);
float getDensity(struct Node *node);
char* getName(struct Node *node);
float getYSpeed(struct Node *node);
float getXSpeed(struct Node *node);
struct Node NodeConstructor(enum Name name, float dens, float xSp, float ySp);


#endif // !NODE_H
