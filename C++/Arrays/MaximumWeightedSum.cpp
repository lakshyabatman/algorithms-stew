/**
 * 
 * 
 * @description: Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
 * 
 * 
 * @author: Lakshya Khera
 * 
 * 
 * */


#include<iostream>
using namespace std;


int maxSum(int arr[]){
  int n = 10;
  int arrSum = 0;
  int currVal = 0;
  for(int i =0;i<n;i++) {
    arrSum+=arr[i];
    currVal+=(i*arr[i]);
  }
  int maxVal = currVal;
  for(int i=1;i<n;i++ ){
    currVal+=arrSum-n*(n-i);
    maxVal = max(maxVal,currVal);
  }
  return maxVal;
}

int main() {
  int arr[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << maxSum(arr);


  return 0;
}