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
  HashTable();
  void print() const;
  int hash(std::string key) const;
  void set(std::string key, int value);
  // int get(const std::string &key) const;
};
#endif
