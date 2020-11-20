/**
 * 
 * https://www.geeksforgeeks.org/shortest-path-reach-one-prime-changing-single-digit-time/
 * 
 * */


#include <bits/stdc++.h> 
  
using namespace std; 
  
class graph { 
    int V;  
    list<int>* l;  
public: 
    graph(int V) 
    { 
        this->V = V; 
        l = new list<int>[V]; 
    } 
    void addedge(int V1, int V2)  
    { 
        l[V1].push_back(V2); 
        l[V2].push_back(V1); 
    } 
    int bfs(int in1, int in2); 
}; 
  
void SieveOfEratosthenes(vector<int>& v)  { 
    
} 
  

int graph::bfs(int in1, int in2)  { 
    
} 
  

bool compare(int num1, int num2) { 
  
} 
  
int shortestPath(int num1, int num2) { 
    
} 
  
int main() { 
    int num1 = 1033, num2 = 8179; 
    cout << shortestPath(num1, num2); 
    return 0; 
} 
