/**
 * https://www.geeksforgeeks.org/minimum-initial-vertices-traverse-whole-matrix-given-conditions/
 * */

#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX = 100; 

int moves[4][2] {
  {-1,0},
  {1,0},
  {0,-1},
  {0,1}
};
bool isValid(int i,int j, int N,int M) {
  return (i>=0 && j >=0 && i <N && j <M);
}


void dfs(int i, int j, bool visit[][MAX], int adj[][MAX], int N, int M) { 
  visit[i][j] = true;
  for(int k=0;k<4;k++) {
    if(isValid(i+moves[k][0],j+moves[k][1],N,M) && adj[i][j]>=adj[i+moves[k][0]][j+moves[k][1]] && !visit[i+moves[k][0]][j+moves[k][1]] ) {
      dfs(i+moves[k][0],j+moves[k][1],visit,adj,N,M);
    }
  }
} 
  
void printMinSources(int adj[][MAX], int N, int M) { 
    vector<pair<long int,pair<int,int> >> arr;
    for(int i=0;i<N;i++) {
      for(int j=0;j<M;j++) {
        arr.push_back(pair<long int,pair<int,int> >(adj[i][j],pair<int,int>(i,j)));
      }
    }
    sort(arr.begin(),arr.end());

    bool visit[N][MAX];
    memset(visit,false, sizeof visit);
    for(int i=arr.size()-1;i>=0;i--) {
      if(!visit[arr[i].second.first][arr[i].second.second] ) {
        cout << arr[i].second.first << " " << arr[i].second.second<<endl;
        dfs(arr[i].second.first,arr[i].second.second,visit,adj,N,M);

      }
    }

} 
  
int main() 
{ 
    int N = 3, M = 3; 
    int adj[][MAX] = {
      {1,2, 3},
      {2, 3, 1},
      {1, 1, 1}
    };
    printMinSources(adj, N, M); 
    return 0; 
} 