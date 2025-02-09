#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <unordered_set>
#include <unordered_map>

class Graph
{
  private:
  std::unordered_map<std::string, std::unordered_set<std::string>> adj_list;

  public:
  bool add_vertex(std::string vertex);
};

#endif
