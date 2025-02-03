#ifndef NODE_H
#define NODE_H
class Node
{
  public:
  Node* left;
  Node* right;
  int value;
  Node(int value);
  bool operator==(Node &node);
  bool operator<(Node &node);
  bool operator>(Node &node);
};
#endif
