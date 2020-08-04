/**
 * 
 * @description: Given a sorted and rotated array, find if there is a pair with a given sum
 * 
 * @author: Lakshya Khera
 * 
 * */


#include<iostream>
using namespace std;

void pairInSortedRotated(int arr[],int n ,int target) {
  int i=0;
  for(i =0;i<n-1;i++) {
    if(arr[i]>arr[i+1]){
      break;
    }
  }
  int l = (i+1)%n;
  int r = i;
  while(l!=r) {
    if(arr[l]+arr[r]  == target) {
      cout << "Found  " <<arr[l] <<" "<<arr[r]<<endl;
      return;
    }
    if(arr[l]+arr[r]<target) {
      l = (l+1)%n;
    }else {
      r = (n+r-1)%n;
    } 
  }

}
int main() {
  int arr[6] ={11,15,6,8,9,10};
  int target = 16;
  int n = 6;
  pairInSortedRotated(arr, n, target);
 
  return 0;
}