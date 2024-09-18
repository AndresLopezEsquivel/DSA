#include <iostream>
using namespace std;

class Cookie
{
private:
  string color;

public:
  Cookie(string color)
  {
    // this is a pointer to the current instance of the class
    // -> is used to access the members of a class through a pointer
    // color is a private member of the class
    this->color = color;
  }
  string getColor()
  {
    return color;
  }
  void setColor(string color)
  {
    // Why we use this->color instead of color?
    // color is a parameter of the function
    // this->color is a private member of the class
    this->color = color;
    // If the parameter had a different name, we could use color = newColor
  }
};

int main()
{
  // new is used to allocate memory for an object and return a pointer to it
  Cookie *cookieOne = new Cookie("yellow");
  Cookie *cookieTwo = new Cookie("blue");
  cout << "cookieOne->color: " << cookieOne->getColor() << endl;
  cout << "cookieTwo->color: " << cookieTwo->getColor() << endl;
  return 0;
}
