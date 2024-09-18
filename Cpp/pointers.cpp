#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  // & is the address of operator
  // * is the dereference operator
  // &a is the address of a
  // pointToA keeps the address of a
  // *pointToA is the value of a
  int *pointToA = &a;
  cout << "Value of a: " << a << endl;
  cout << "Value of *pointToA: " << *pointToA << endl;
  cout << "Address of a (&a): " << &a << endl;
  cout << "Address of a (pointToA): " << pointToA << endl;
  // secondPointToA keeps the address of pointToA
  // pointToA keeps the address of a
  int *secondPointToA = pointToA;
  cout << "Address of a (secondPointToA): " << secondPointToA << endl;
  // a is now 11
  // *pointToA is now 11
  // *secondPointToA is now 11
  // &a, pointToA, and secondPointToA point to the same address
  a = 11;
  cout << "New value of a (a): " << a << endl;
  cout << "New value of a (*pointToA): " << *pointToA << endl;
  cout << "New value of a (*secondPointToA): " << *secondPointToA << endl;
  return 0;
}
