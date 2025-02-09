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

  std::cout << std::endl;
  std::cout << "Value of key 'one' : " << ht.get("one") << std::endl;
  std::cout << "Value of key 'two' : " << ht.get("two") << std::endl;
  std::cout << "Value of key 'three' : " << ht.get("three") << std::endl;
  std::cout << "Value of key 'nine' : " << ht.get("nine") << std::endl;
  std::cout << "Value of key 'ten' : " << ht.get("ten") << std::endl;
  std::cout << "Value of key 'eleven' : " << ht.get("eleven") << std::endl;

  return 0;
}
