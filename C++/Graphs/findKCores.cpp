#include<bits/stdc++.h> 
using namespace std; 
  
class Graph { 
    int V;    
    list<int> *adj; 
public: 
    Graph(int V);  
    void addEdge(int u, int v); 
    bool DFSUtil(int, vector<bool> &, vector<int> &, int k); 
    void printKCores(int k); 
}; 

Graph::Graph(int V) { 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int u, int v) { 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 

bool Graph::DFSUtil(int v,vector<bool> &visited, vector<int> &degree, int k) {
    visited[v] = true;
    for(auto i : adj[v]) {
        if(degree[v]<k) {
            degree[i]--;
        }
        if(!visited[i]) if(DFSUtil(i,visited,degree,k)) degree[v]--;
    }
    return degree[v] <k;
}
void Graph::printKCores(int k) { 
    vector<bool> visited(V);
    vector<int> inDegree(V,0);
    int minDegree = INT_MAX;
    int startVertex =0;
    for(int i=0;i<V;i++) {
        inDegree[i] = adj[i].size();
        if(minDegree>inDegree[i]) {
            minDegree = inDegree[i];
            startVertex = i;
        }

    }
    DFSUtil(startVertex,visited,inDegree,k);
    for(int i=0;i<V;i++) {
        if(inDegree[i]>=k) {
            cout << i << " ";
            for(auto j: adj[i]) {
                if(inDegree[j]>=k) cout << j << " ";
            }
            cout << endl;
        }

    }


} 
  
int main() { 
    int k = 3; 
    Graph g1(9); 
    g1.addEdge(0, 1); 
    g1.addEdge(0, 2); 
    g1.addEdge(1, 2); 
    g1.addEdge(1, 5); 
    g1.addEdge(2, 3); 
    g1.addEdge(2, 4); 
    g1.addEdge(2, 5); 
    g1.addEdge(2, 6); 
    g1.addEdge(3, 4); 
    g1.addEdge(3, 6); 
    g1.addEdge(3, 7); 
    g1.addEdge(4, 6); 
    g1.addEdge(4, 7); 
    g1.addEdge(5, 6); 
    g1.addEdge(5, 8); 
    g1.addEdge(6, 7); 
    g1.addEdge(6, 8); 
    g1.printKCores(k); 
  
    cout << endl << endl; 
  
    Graph g2(13); 
    g2.addEdge(0, 1); 
    g2.addEdge(0, 2); 
    g2.addEdge(0, 3); 
    g2.addEdge(1, 4); 
    g2.addEdge(1, 5); 
    g2.addEdge(1, 6); 
    g2.addEdge(2, 7); 
    g2.addEdge(2, 8); 
    g2.addEdge(2, 9); 
    g2.addEdge(3, 10); 
    g2.addEdge(3, 11); 
    g2.addEdge(3, 12); 
    g2.printKCores(k); 
  
    return 0; 
} 