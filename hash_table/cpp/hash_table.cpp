#include <iostream>
#include <string>
#include "hash_table.h"
#include "node.h"

void HashTable::print() const
{
  for(size_t i = 0; i < SIZE; i++)
  {
    std::cout << i << " : " << std::endl;
    // Node *tmp = hash_table[i];
    // while(tmp != nullptr)
    // {
    //   std::cout << "{" << tmp->key;
    //   std::cout << " : " << tmp->value << "}";
    //   std::cout << std::endl;
    // }
  }
}

int HashTable::hash(const std::string &key) const
{
  int hash {0};
  for(size_t i = 0; i < key.length(); i++)
  {
    int ascii = int(key[i]);
    hash = (hash + ascii * 23) % SIZE;
  }
  return hash;
}

void HashTable::set(const std::string &key, int value)
{
  int index = hash(key);
  Node *new_node = new Node{key, value};

  if(hash_table[index] == nullptr)
  {
    hash_table[index] = new_node;
  }
  else
  {
    Node *tmp = hash_table[index];
    while(tmp->next != nullptr)
      tmp = tmp->next;
    tmp->next = new_node;
  }
}
