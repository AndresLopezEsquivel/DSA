#include <string>
#include "hash_table.h"

int HashTable::hash(std::string &key)
{
  int hash {0};
  for(size_t i = 0; i < key.length(); i++)
  {
    int ascii = int(key[i]);
    hash = (hash + ascii * 23) % SIZE;
  }
  return hash;
}
