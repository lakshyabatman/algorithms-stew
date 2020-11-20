#include<iostream>
using namespace std;


int main() {
  int n;
  cin >> n;
  int arr[n];
  int curr=1;
  int res =1;
  if(n == 0) {
    cout << 0 <<endl;
    return 0;
  }
  
  for(int i=0;i<n;i++) {
    int temp;
    cin >> temp;
    arr[i]= temp;
  }

  for(int i=1;i<n;i++) {
    if(arr[i-1]<=arr[i]) {
      curr++;
      res = max(res,curr);
    }else {
      curr = 1;
    }
  }
  cout << res<<endl;
  

  return 0;
}