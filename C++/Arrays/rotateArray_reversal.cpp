#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int start, int end)
{
    while(start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
void rotate_left(int a[], int n, int k)
{
	if (k == 0)
		return;
    reverseArray(a, 0, k-1);
    reverseArray(a, k, n-1); 
    reverseArray(a, 0, n-1);   
}
void rotate_right(int a[], int n, int k)
{
	if (k == 0)
		return;
    reverseArray(a, n-k, n-1);
    reverseArray(a, 0, n-k-1); 
    reverseArray(a, 0, n-1); 
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "   ";
}

int main()
{
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int k = 3; //no. of elements by which to rotate
	int size = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, size);
	rotate_left(arr, size, k);
	cout << endl
		 << "Array after rotation   ";
	printArray(arr, size);
	cout << endl;
}
