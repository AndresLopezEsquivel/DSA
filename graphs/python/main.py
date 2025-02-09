from graph import Graph

if __name__ == "__main__":
    graph = Graph()
    graph.add_vertex("A")
    graph.add_vertex("B")
    graph.add_vertex("C")
    graph.add_edge("A", "B")
    graph.add_edge("C", "A")
    graph.add_edge("B", "C")
    graph.print_graph()
    graph.remove_vertex("A")
    print()
    graph.print_graph()
