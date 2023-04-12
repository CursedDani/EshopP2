#include "Product.h"

#ifndef NODE_H
#define NODE_H
class Node {

public:
  product *data;
  Node *next;

  Node(product *d) {
    this->data = data;
    this->next = NULL;
  }
};
#endif