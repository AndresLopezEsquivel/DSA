#include "graph.h"

bool Graph::add_vertex(std::string vertex)
{
  if(adj_list.count(vertex) == 0) return false;
  adj_list[vertex];
  return true;
}
