#include <iostream>
#include <string>
#include "hash_table.h"
#include "node.h"

HashTable::HashTable()
{
  for(size_t i = 0; i < SIZE; i++)
    hash_table[i] = nullptr;
}

void HashTable::print() const
{
  for(int i = 0; i < SIZE; i++)
  {
    std::cout << i << " : " << std::endl;
    if(hash_table[i] == nullptr) continue;
    Node *tmp = hash_table[i];
    while(tmp != nullptr)
    {
      std::cout << "{" << tmp->key;
      std::cout << " : " << tmp->value << "}";
      std::cout << std::endl;
      tmp = tmp->next;
    }
  }
}

int HashTable::hash(std::string key) const
{
  int index {0};
  for(size_t i = 0; i < key.length(); i++)
  {
    int ascii = int(key[i]);
    index = (index + ascii * 23) % SIZE;
  }
  return index;
}

void HashTable::set(std::string key, int value)
{
  int index = hash(key);
  Node *new_node = new Node{key, value};

  if(hash_table[index] == nullptr)
  {
    hash_table[index] = new_node;
    return;
  }
  Node *tmp = hash_table[index];
  while(tmp->next != nullptr)
    tmp = tmp->next;
  tmp->next = new_node;
}

int HashTable::get(std::string key) const
{
  int index = hash(key);
  if(hash_table[index] == nullptr) return 0;
  Node* tmp = hash_table[index];
  while(tmp != nullptr)
  {
    if(tmp->key == key) return tmp->value;
    tmp = tmp->next;
  }
  return 0;
}
