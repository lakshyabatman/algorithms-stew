/**
 * 
 * @description:Queries on Left and Right Circular shift on array
 * 
 * @author: Lakshya Khera
 * 
 * 
 * */

#include<iostream>
using namespace std;

void querytype1(int * netRotate, int times,int n) {
  (*netRotate) = (*netRotate -times)%n;
}

void querytype2(int *netRotate,int times,int n) {
  (*netRotate) = (*netRotate +times)%n;
}

void querytype3(int netRotate, int l,int r,int preSum[],int n) {
  l = (l + netRotate +n)%n;
  r = (r+netRotate+n)%n;
  if (l <= r)  
    cout << (preSum[r] - preSum[l-1]) << endl;     
  else 
    cout << (preSum[n-1] + preSum[r] - preSum[l-1]) << endl;  
}
int main() {
  int n = 6;
  int arr[6] = {1,2,3,4,5,6};
  int preSum[n];
  preSum[0] = arr[0];
  for(int i =1;i<n;i++) {
    preSum[i] = preSum[i-1]+arr[i];
  }
  int netRotate = 0;
  querytype1(&netRotate, 3, n); 
  querytype3(netRotate, 0, 2, preSum, n); 
  querytype2(&netRotate, 1, n); 
  querytype3(netRotate, 1, 4, preSum, n); 
  return 0;
}