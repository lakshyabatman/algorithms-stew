class Graph:
	def __init__(self, graph_dict = None):
		if graph_dict is None:
			graph_dict = {}
		self.__graph_dict = graph_dict

	def vertices(self):
		return list(self.__graph_dict.keys())

	def edges(self):
		return self.__generate_edges()

	def add_vertex(self, vertex):
		if vertex not in self.__graph_dict:
			self.__graph_dict[vertex] = []

	def add_edge(self, edge):
		"edge is a tuple with vertex1 and vertex2"
		
		vertex1, vertex2 = tuple(edge)
		if vertex1 in self.__graph_dict:
			self.__graph_dict[vertex1].append(vertex2)
		else:
			self.__graph_dict[vertex1] = [vertex2]

	def getConnections(self, vertex):
		if vertex not in self.__graph_dict:
			raise NameError("Vertex is not present in the graph")
		return self.__graph_dict[vertex]

	def __generate_edges(self):

		edges = []
		for vertex in self.__graph_dict:
			for neighbor in self.__graph_dict[vertex]:
				if {vertex, neighbor} not in edges:
					edges.append({vertex, neighbor})
		return edges

	def __str__(self):
		res = "Vertices"
		res = res + "\n" + str(self.vertices())
		res = res + "\n" + "Edges\n" + str(self.edges())
		return res

if __name__ == "__main__":
	g = {
		"a": ["b", "c"],
		"b": ["c", "d"],
		"c": ["a", "d", "e"],
		"d": ["a"],
		"e": ["a", "b", "c"]
	}
	graph = Graph(g)
	print("Printing Vertices")
	print(graph.vertices())

	print("Edges of graph")
	print(graph.edges())

	print("Add vertex")
	graph.add_vertex("z")

	print("vertices of graph")
	print(graph.vertices())

	print("Add an edge")
	graph.add_edge(["a", "z"])
	print("vertices of graph")
	print(graph.vertices())

	print("Edges of graph")
	print(graph.edges())

	print("Adding an edge {x,y} with new vertices")
	graph.add_edge(("x", "y"))
	print("vertices of graph:")
	print(graph.vertices())
	print("Edges of graph:")
	print(graph.edges())