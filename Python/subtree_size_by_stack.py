''' Calculate the subtree size of each node of a tree rooted at node 1 '''

import copy

def calculateSubtreeSize(root, no_of_nodes):
    # Store size of subtree of each node 'i'
    subtree_size = [0 for _ in range(no_of_nodes + 1)]
    # Boolean array to check if a node is already visited or not
    visited = copy.copy(subtree_size)
    # Store parent of each node i
    parent = copy.copy(subtree_size)
    # Define parent of root node
    parent[root] = -1

    stack1 = [root]
    stack2 = []

    while len(stack1) > 0:
        root = stack1.pop()
        visited[root] = 1
        stack2.append(root)
        for x in graph[root]:
            if not visited[x]:
                parent[x] = root
                stack1.append(x)

    while len(stack2) > 0:
        root = stack2.pop()
        subtree_size[root] = 1
        for x in graph[root]:
            if x != parent[root]:
                subtree_size[root] += subtree_size[x]

    return subtree_size

no_of_nodes = int(input())
graph = [[] for _ in range(no_of_nodes + 1)]

for _ in range(no_of_nodes - 1):
	x, y = map(int, input().strip().split())
	graph[x].append(y)
	graph[y].append(x)

# "root" is used to define the root of the tree, change the root node to whatever node you want
root = 1
subtree_size = calculateSubtreeSize(root, no_of_nodes)
for i in range(1, no_of_nodes + 1):
    print("The subtree size of vertex %s is %s" % (i, subtree_size[i]))