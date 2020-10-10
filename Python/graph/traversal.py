from graph import Graph

def bfs(graph, node):
	queue = [node]
	path = []
	visited = dict()
	for i in graph.vertices():
		visited[i] = False
	print("Boop")
	while len(queue)!=0:
		# print(queue)
		# print(path)
		# print("Pew")
		curr_node = queue[0]
		queue.remove(queue[0])
		visited[curr_node] = True
		path.append(curr_node)
		for i in graph.getConnections(curr_node):
			if not visited[i] and i not in queue:
				queue.append(i)
	return path


def dfs(graph, node):
	stack = [node]
	path = []
	visited = dict()
	print("Yoppi")
	for i in graph.vertices():
		visited[i] = False
	while len(stack)!=0:
		# print(stack)
		# print(path)
		curr_node = stack.pop()
		visited[curr_node] = True
		path.append(curr_node)
		for i in graph.getConnections(curr_node):
			if not visited[i] and i not in stack:
				stack.append(i)
	return path



if __name__ == "__main__":
	g = {
		"a": ["b", "c"],
		"b": ["c", "d"],
		"c": ["a", "d", "e"],
		"d": ["a"],
		"e": ["a", "b", "c"]
	}
	graph = Graph(g)
	print("Bfs")
	print(bfs(graph, "a"))
	print("Dfs")
	print(dfs(graph, "b"))