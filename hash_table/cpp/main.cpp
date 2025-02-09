#include<iostream>
#include<string>
#include "hash_table.h"

int main()
{
  HashTable ht;

  ht.set("one", 1);
  ht.set("two", 2);
  ht.set("three", 3);
  ht.set("four", 4);
  ht.set("five", 5);
  ht.set("six", 6);
  ht.set("seven", 7);
  ht.set("eight", 8);

  ht.print();

  return 0;
}
