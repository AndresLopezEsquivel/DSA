#include "graph.h"

bool Graph::add_vertex(std::string vertex)
{
  if(adj_list.count(vertex) == 0) return false;
  adj_list[vertex];
  return true;
}

bool Graph::add_edge(std::string vertex_1, std::string vertex_2)
{
  if(adj_list.count(vertex_1) == 0) return false;
  if(adj_list.count(vertex_2) == 0) return false;

  adj_list.at(vertex_1).insert(vertex_2);
  adj_list.at(vertex_2).insert(vertex_1);
  return true;
}
