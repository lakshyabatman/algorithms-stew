"""
This program computes maximum number of edges that can be inserted in a bipartite graph
without violating its bipartite property.
"""
print("No. of vertices: ")
n = int(input())
print("No. of edges: ")
e = int(input())
adjlst = {}
print("Enter edges - enter 'a b' if there is an edge between a and b :")
for i in range(e):
    x,y = map(int, input().split(' '))
    if(adjlst.get(x, -1) == -1):
        adjlst[x] = [y]
    else:
        adjlst[x].append(y)


color = [0]*(n+1)

for i in adjlst.keys():
    for j in range(len(adjlst[i])):
        if(color[i] == color[adjlst[i][j]]):
            color[adjlst[i][j]] = color[i] + 1


r = 0
g = 0
for i in range(1,n+1):
    if(color[i] == 0):
        g += 1
    else:
        r += 1

print("Maximum no. of edges that can be added without violating bipartite property is:")
print(g*r - e)
