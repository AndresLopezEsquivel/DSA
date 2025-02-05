#ifndef NODE_H
#define NODE_H
#include<string>
class Node
{
  private:
  static const int SIZE = 7;
  Node* hash_table[SIZE];
  public:
  std::string key;
  int value;
  Node* next;
  Node(std::string &key, int value);
};
#endif
