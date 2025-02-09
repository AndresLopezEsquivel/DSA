#include<string>
#include "node.h"

Node::Node(std::string key, int value)
: key{key}, value{value}, next{nullptr}
{}
