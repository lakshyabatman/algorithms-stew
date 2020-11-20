#include<bits/stdc++.h>
using namespace std;


int main() {
  int n,t;
  string q;
  cin >> n >> t;
  cin >> q;
  vector<int> bPost;
  
  for(int i =0;i<n-1;i++) {
    if(q[i] == 'B') bPost.push_back(i);
  }
  while(t) {
   for(int i=0;i<bPost.size();i++) {
     if(q[bPost[i]+1]=='G') {
       q[bPost[i]+1]='B';
       q[bPost[i]]='G';
       bPost[i]= bPost[i]+1;
     }
   }
   t--;
  }
  cout << q<<endl;

  return 0;
}