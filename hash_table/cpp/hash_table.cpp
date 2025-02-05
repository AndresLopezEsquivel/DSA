#include <string>
#include "hash_table.h"
#include "node.h"

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

void HashTable::set(std::string &key, int value)
{
  int index = hash(key);
  Node *new_node = new Node{key, value};
  Node *tmp = hash_table[index];

  if(tmp == nullptr)
  {
    tmp = new_node;
    return;
  }

  while(tmp->next != nullptr)
    tmp = tmp->next;

  tmp = new_node;
}
