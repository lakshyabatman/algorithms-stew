/**
 * 
 * @description: Find The rotatation count in rotated sorted array
 *
 *@author: Lakshya Khera 
 * 
 * */


#include<iostream>
using namespace std;

int findRotation(int arr[],int n) {
  int left = 0;
  int right = n-1;

  while(left<right) {
    int mid= left +(right-left)/2;
    if(mid < right && arr[mid+1]<arr[mid]) {
      return mid+1;
    }
    if(mid > left && arr[mid]<arr[mid-1]) {
      return mid;
    }
    if(arr[right]> arr[mid]) {
      right = mid;
    }else{
      left = mid;
    }
  }
  return left;
}

int main() {
  int arr[6] = {15, 18, 2, 3, 6, 12};
  int n =6;
  cout << findRotation(arr,n);

  return 0;
}