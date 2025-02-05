#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include<string>
#include "node.h"
class HashTable
{
  private:
  static const int SIZE = 7;
  Node* hash_table[SIZE];

  public:
  int hash(std::string &key);
};
#endif
