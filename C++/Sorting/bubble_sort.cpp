#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
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
	int arr[] = {2, 6, 3, 1, 12, 67, 89, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	printArray(arr, n);
}