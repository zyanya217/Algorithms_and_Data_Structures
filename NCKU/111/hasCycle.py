function hasCycle(graph):
    visited = set()  # 存儲已訪問的節點
    recursionStack = set()  # 存儲當前DFS遍歷的遞迴堆疊

    # 對graph中的每個節點進行檢查
    for node in graph.getNodes():
        if node not in visited:
            # 若該節點還未被訪問，則進行DFS
            if dfs(node, visited, recursionStack, graph):
                return True

    return False

# DFS
function dfs(node, visited, recursionStack, graph):
    visited.add(node)        # 將節點標記為已訪問
    recursionStack.add(node)  # 將節點添加到遞歸堆疊

    # 遍歷節點的所有鄰居
    for neighbor in graph.getNeighbors(node):
        if neighbor not in visited:
            # 若鄰居還未被訪問，遞歸進行DFS
            if dfs(neighbor, visited, recursionStack, graph):
                return True
        elif neighbor in recursionStack:
            # 若鄰居已經在遞迴堆疊中，表示存在循環
            return True

    recursionStack.remove(node)  # 從遞迴堆疊中移除當前節點
    return False
