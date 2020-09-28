#include<bits/stdc++.h>
using namespace std;


int main() {
  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  for(int i =0;i<n;i++) {
    cin>> arr[i];
  }
  // sort(arr.begin(),arr.end(),[](int a,int b) -> bool {
  //   return a>b;
  // });
  // for(int a :arr ) {
  //   cout << a<<" ";
  // }
  cout <<endl;
  int count = 0;
  
  for(int i=0;i<n;i++) {
    if(arr[k-1]<=arr[i] && arr[i]>0) count++;
  }
  cout<<count<<endl;

  return 0;
}