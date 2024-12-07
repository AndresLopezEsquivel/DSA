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

  void deleteLast()
  {
    /*
    The method has an O(n) complexity for lists with multiple nodes since it traverses
    the list to find the second-to-last node. For very large lists, this could be a bottleneck.
    If frequent deletions from the end are expected, consider using a doubly linked list to allow
    O(1) deletion of the last node by maintaining a prev pointer.
    */
    if (tail == nullptr) return;

    if (head == tail)
    {
      delete head;
      head = nullptr;
      tail = nullptr;
    }
    else
    {
      Node *tmpNode = head;
      while(tmpNode->next != tail)
        tmpNode = tmpNode->next;
      delete tail;
      tail = tmpNode;
      tail->next = nullptr;
    }
    length--;
  }

  void deleteFirst()
  {
    if(tail == nullptr) return;

    if(head == tail)
    {
      delete head;
      head = nullptr;
      tail = nullptr;
    }
    else
    {
      Node *next = head->next;
      delete head;
      head = next;
    }
    length--;
  }

  void prepend(int newValue)
  {
    Node *newNode = new Node(newValue);
    length++;

    if(tail == nullptr) // Empty list
    {
      head = tail = newNode;
      return;
    }

    newNode->next = head;
    head = newNode;
  }

  Node* get(int index)
  {
    if(tail == nullptr) return nullptr; // For an empty list
    if(index < 0 || length <= index) return nullptr;
    if(index == 0) return head;

    Node *current = head;
    for(size_t i = 0; i < index; i++)
      current = current->next;
    return current;
  }

  bool set(int index, int value)
  {
    Node *node = get(index);
    if (node == nullptr) return false;
    node->value = value;
    return true;
  }

  int getLength() const { return length; }
};

int main()
{
  LinkedList list(1);

  list.appendNode(2);
  list.appendNode(3);
  list.appendNode(4);
  list.printLinkedList();
  list.deleteLast();
  list.printLinkedList();
  list.prepend(0);
  list.prepend(-1);
  list.printLinkedList();
  list.deleteFirst();
  list.printLinkedList();

  Node *node = list.get(3);
  cout << "Node at [3] = " << node->value << endl;

  list.set(3, 4);
  list.printLinkedList();

  return 0;
}
