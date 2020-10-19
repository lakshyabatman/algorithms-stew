

#include<iostream>
#include<vector>
using namespace std;

int Solve(vector<vector<int>> graph,int root, int &res) {
    
    if(graph[root].size() == 0) return 1;
    int maxChild = 0;
    int secondMaxChild = 0;
    // cout <<"------"<<endl;
    // cout << root <<endl;
    for(int u : graph[root]) {
      // cout <<"MAX : "<< maxChild<<" SECOND: "<<secondMaxChild<<endl;
       int temp = Solve(graph,u,res);
      //  cout <<"TEMP "<<temp<<endl;
      //  cout << temp<< " from : "<< u<<endl;
       if(temp>=maxChild) {
           secondMaxChild = maxChild;
           maxChild = temp;
           continue;
       }
       if(temp> secondMaxChild) {
           secondMaxChild = temp;
       }
    }
    // cout << "HERE AT: "<<root <<" "<< maxChild<< " " <<secondMaxChild<< " WITH RES: " << res<< endl;
    res = max(res, maxChild+secondMaxChild);
    cout << "END "<<root<<endl;
    return max(maxChild,secondMaxChild)+1;
    
    
};


int solve(vector<int> &A) {
    int n = A.size();
    vector<vector<int>> graph(n);
    if(n == 1 || n==0) return 0;
    int root;
    for(int i=0;i<n;i++) {
        if(A[i] == -1) {
            root =i;
            continue;
        }
        graph[A[i]].push_back(i);
    }
    // cout<< "HI" << graph[0].size()<<endl;
    int res =0;
    Solve(graph,root,res);
    return res;
}


int main() {

  vector<int> arr {-1, 0, 0, 1, 2, 1, 5 };
  cout << solve(arr)<<endl;
  return 0;
}