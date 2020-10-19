#include<iostream>
using namespace std;


int main() {
  long long int n;
  cin >> n;
  long long int arr[n];
  if(n == 0) return 0;
  for(long long int i =0;i<n;i++) {
    cin >>arr[i];
  }
  while(n!=0) {
    long long int work =0;
    long long int seller = 0;
    long long int buyer= 0;
    while(true) {
      while(buyer<n && arr[buyer]<=0) buyer++;
      while(seller<n && arr[seller]>=0) seller++;
      if(buyer == n || seller == n) break;
      long long int transaction = min(arr[buyer],-arr[seller]);
      work+=(abs(buyer-seller))*transaction;
      arr[buyer]-=transaction;
      arr[seller]+=transaction;
    }

    cout << work<<endl;
    cin >> n;
    if(n== 0 ) break;
    for(long long int i =0;i<n;i++) {
      cin >>arr[i];
    }
  }
  return 0;
}