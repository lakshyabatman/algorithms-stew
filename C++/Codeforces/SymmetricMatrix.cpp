#include<bits/stdc++.h>
using namespace std;


int main() {
  int test;
  cin >> test;
  while(test--) {
    int n,m;
    cin >> n >> m;
    bool flag = 0;
    vector<vector<int>> tiles;
    for(int i=0;i<n;i++) {
      vector<int> t(4);
      cin >> t[0] >>t[1];
      cin >> t[2]>>t[3];
      if(t[1] == t[2]) flag = 1;
      tiles.push_back(t);
    }
    if(m%2==0) {
        if(flag) {
          cout<< "YES"<<endl;
        }else {
          cout <<"NO"<<endl;
        }
      
    }else {
      cout << "NO"<<endl;
    }
  }

  return 0;
}