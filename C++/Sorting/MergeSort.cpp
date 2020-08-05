/**
 * 
 * @description: Merge Sort O(nlogn)
 * 
 * @author: Lakshya Khera
 * 
 * */

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int l ,int m, int r) {
  int i, j, k;
  int n1 = m-l+1;
  int n2 = r-m;
  vector<int> L(n1),R(n2);
  for(i =0;i<n1;i++ ){
    L[i] = arr[l+i];    
  }
  for(j=0;j<n2;j++) {
    R[j] = arr[m+1+j];
  }
  i=0;
  j=0;
  k=l;
  while (i < n1 && j < n2) { 
    if (L[i] <= R[j]) { 
      arr[k] = L[i]; 
      i++; 
    } else { 
      arr[k] = R[j]; 
      j++; 
    } 
    k++; 
  } 
  while (i < n1) { 
    arr[k++] = L[i++]; 
  } 
  while (j < n2) { 
    arr[k++] = R[j++]; 
  } 

} 


void mergeSort(vector<int> &arr, int l ,int r) {
  if(l<r) {
    int mid = (l+r)/2;
    mergeSort(arr, l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
  }
}

int main() {

  vector<int> arr{12, 11, 13, 5, 6, 7 };
  mergeSort(arr,0,arr.size()-1);
  for(int i : arr)
    cout << i << " ";
  cout << endl;
  return 0;
}