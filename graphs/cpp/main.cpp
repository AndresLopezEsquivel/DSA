#include <iostream>
#include "graph.h"

int main()
{
  Graph g;

  g.add_vertex("A");
  g.add_vertex("B");
  g.add_vertex("C");
  g.add_vertex("D");

  g.add_edge("A", "B");
  g.add_edge("A", "C");
  g.add_edge("B", "D");
  g.add_edge("C", "D");

  g.print();

  return 0;
}
