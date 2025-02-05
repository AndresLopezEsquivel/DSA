#include<string>
#include "node.h"

Node::Node(const std::string &key, int value)
: key{key}, value{value}, next{nullptr}
{}
