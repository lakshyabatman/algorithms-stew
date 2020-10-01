#include<bits/stdc++.h>
using namespace std;

void selection_sort (int arr[], int n)
{
      int min_i;    
      for (int i = 0; i < n-1; i++)
      { 
            min_i = i;
            for(int j = i+1; j < n; j++)
            {
                  if(arr[j] > arr[min_i])
                        min_i = j;
            }
            swap(arr[i], arr[min_i]);
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
      selection_sort(arr, n);     
      printArray(arr, n);
}