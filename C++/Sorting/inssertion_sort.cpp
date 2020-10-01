#include<bits/stdc++.h>
using namespace std;

void insertion_sort (int arr[], int n)
{
      int key, j;
      for (int i = 0; i < n; i++)
      {
            key = arr[i];
            j = i-1;
            while(j >= 0 && arr[j] > key)
            {
                  arr[j+1] = arr[j];
                  j--;
            }
            arr[j+1] = key;
      }
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "   ";
      cout << endl;      
}

int main()
{
      int arr[]  = {2, 6, 3, 1, 12, 67, 89, 10};
      int n = sizeof(arr)/sizeof(arr[0]);
      insertion_sort(arr, n);     
      printArray(arr, n);
}