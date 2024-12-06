#include <iostream>

using namespace std;

class Node
{
  public:
  int value;
  Node *next;

  Node(int value) : value(value), next(nullptr) {}
};

class LinkedList
{
  private:
  Node *head;
  Node *tail;
  int length;

  public:
  LinkedList() : head(nullptr), tail(nullptr), length(0) {}
  LinkedList(int value) : LinkedList() { appendNode(value); }

  ~LinkedList()
  {
    Node *currentNode = head;
    while(currentNode)
    {
      Node *tmp = currentNode;
      currentNode = currentNode->next;
      delete tmp;
    }
  }

  void appendNode(int value)
  {
    Node *newNode = new Node(value);

    if(tail)
    {
      tail->next = newNode;
      tail = newNode;
    }
    else
    {
      head = newNode;
      tail = newNode;
    }
    length++;
  }

  void printLinkedList()
  {
    if(!tail)
    {
      cout << "== Empty Linked List ==" << endl;
      return;
    }
    else
    {
      Node *tmpNode = head;

      while(tmpNode)
      {
        cout << tmpNode->value;
        if(tmpNode->next)
          cout << " -> ";
        tmpNode = tmpNode->next;
      }
      cout << endl;
    }
  }
};

int main()
{
  LinkedList list(1);

  list.appendNode(2);
  list.appendNode(3);
  list.appendNode(4);
  list.printLinkedList();

  return 0;
}
