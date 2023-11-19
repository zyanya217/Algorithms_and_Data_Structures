from collections import deque

def bfs(start, graph, visited, component):
    queue = deque([start])
    visited[start - 1] = True

    while queue:
        current_node = queue.popleft()
        component.append(current_node)
        for neighbor in graph[current_node]:
            if not visited[neighbor - 1]:
                visited[neighbor - 1] = True
                queue.append(neighbor)

def connected_components(graph):
    num_nodes = len(graph)
    visited = [False] * num_nodes
    components = []

    for node in range(1, num_nodes + 1):
        if not visited[node - 1]:
            component = []
            bfs(node, graph, visited, component)
            components.append(component)

    return components

# 題目給的graph-adjacency list
example_graph = {
    1: [2, 5, 6, 7],
    2: [1, 3, 5],
    3: [2, 4],
    4: [3, 5],
    5: [1, 2, 4],
    6: [1, 7],
    7: [1, 6]
}

result = connected_components(example_graph)
print("Connected Components:", result)
