#include<iostream>
using namespace std;


int main() {
  int test;
  cin >> test;
  while(test-- ) {
    int n,res = 0;
    cin >> n;
    for(int i=0;i<n;i++) {
      int v,p,s;
      cin >> s >> v >> p;
      res= max(res,(v/(s+1))*p);
    }
    cout<<res<<endl;
  }

  return 0;
}