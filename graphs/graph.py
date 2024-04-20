from pprint import pprint

class Graph:
    def __init__(self):
        # Instead of using an adjacency matrix,
        # we are going to se an adjancency list
        self.adj_list = {}

    def print_graph(self):
        for vertex in self.adj_list:
            print(f"{vertex} : {self.adj_list[vertex]}")

    def add_vertex(self, vertex):
        if self.exist_in_graph(vertex):
            return False
        self.adj_list[vertex] = set()
        return True

    def add_edge(self, vertex_1, vertex_2):
        if not self.exist_in_graph(vertex_1, vertex_2):
            return False
        self.adj_list[vertex_1].add(vertex_2)
        self.adj_list[vertex_2].add(vertex_1)
        return True

    def remove_edge(self, vertex_1, vertex_2):
        if not self.exist_in_graph(vertex_1, vertex_2):
            return False

        if not self.exists_edge(vertex_1, vertex_2):
            return False

        self.adj_list[vertex_1].remove(vertex_2)
        self.adj_list[vertex_2].remove(vertex_1)

    def remove_vertex(self, vertex):
        if not self.exist_in_graph(vertex):
            return False

        for edge_vertex in self.adj_list[vertex]:
            self.adj_list[edge_vertex].remove(vertex)

        del self.adj_list[vertex]
        return True

    def exist_in_graph(self, *vertices):
        for vertex in vertices:
            if vertex not in self.adj_list:
                return False
        return True

    def exists_edge(self, vertex_1, vertex_2):
        return (vertex_2 in self.adj_list[vertex_1]) and (vertex_1 in self.adj_list[vertex_2])
