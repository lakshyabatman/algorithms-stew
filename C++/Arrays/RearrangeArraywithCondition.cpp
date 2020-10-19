/**
 * 
 * @description: Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i
 * 
 * @author: Lakshya Khera
 * 
 * */

#include<iostream>
#include<algorithm>
using namespace std;


void rearrange(int arr[],int n) {
  int oddPos = n-n/2;
  int tempArr[n];
  for(int i =0;i<n;i++) {
    tempArr[i] = arr[i];
  }
  sort(tempArr,tempArr+n);
  int j = oddPos-1;
  for(int i=0;i<n;i+=2) {
    arr[i]= tempArr[j];
    j--;
  }
  for(int i=0;i<n;i++) {
    cout << arr[i] << " ";
  }
    cout <<endl;

  j = oddPos;
  for(int i=1;i<n;i+=2) {
    arr[i] = tempArr[j];
    j++;
  }
  for(int i=0;i<n;i++) {
    cout << arr[i] << " ";
  }
  cout <<endl;
}

int main() {

  int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
  rearrange(arr,7);
  return 0;
}