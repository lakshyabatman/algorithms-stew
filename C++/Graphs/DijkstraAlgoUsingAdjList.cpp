/**
 * 
 * @description: Dijkstra Algorithm using Adj List
 * 
 * @author: Lakshya Khera
 * */

#include<iostream>
#include<vector>
using namespace std;


struct Edge {
  int dest;
  int weight;
  Edge(int dest,int weight): dest(dest),weight(weight) {}
};

class WeightedGraphAdj {
  private:
  int V;
  vector<vector<Edge*>> * adj; 
  public:
    WeightedGraphAdj(int V) {
      this->V = V;
      this->adj = new vector<vector<Edge*>> (V, vector<Edge*> (V));
    }

    void addEdge(int u,int v,int weight) {
      Edge* tempEdge = new Edge(v,weight);
      (*adj)[u].push_back(tempEdge);
      Edge *tempEdge1 = new Edge(u,weight);
      (*adj)[v].push_back(tempEdge);
    } 
    void Dijkstra(int src);

};


void WeightedGraphAdj::Dijkstra(int src) {
  vector<bool> sptSet(V,false);
  
}


int main() {
  WeightedGraphAdj graph(4);
  graph.addEdge(2,3,10);
  graph.addEdge(0,2,34);

  return 0;
}