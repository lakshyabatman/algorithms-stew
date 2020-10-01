#include <bits/stdc++.h>
using namespace std;

/* int gcd (int a, int b)
{
	if (b == 0)
		return a;
	else 
		return gcd(b, a%b);	
} */

void rotate_left(int a[], int n, int k)
{
	k = k % n;
	int setno = __gcd(k, n); // no. of blocks is gcd of k and n

	for (int i = 0; i < setno; i++)
	{
		int temp = a[i]; //pick ith element of each block to move
		int j = i;
		while (true)
		{
			int itr = j + k;
			//cout << "  itr = " << itr;
			if (itr >= n)
				itr -= n;
			if (itr == i)
				break;
			a[j] = a[itr];
			j = itr;
		}
		a[j] = temp; // leave the ith element
	}
}
void rotate_right(int a[], int n, int k)
{
	k = k % n;
	int setno = __gcd(k, n); // no. of blocks is gcd of k and n

	for (int i = 0; i < setno; i++)
	{
		int temp = a[n-1-i]; //pick ith element of each block to move
		int j = n-1-i;
		while (true)
		{
			int itr = j - k;
			//cout << "  itr = " << itr;
			if (itr < 0)
				itr += n;
			if (itr == n-1-i)
				break;
			a[j] = a[itr];
			j = itr;
		}
		a[j] = temp; // leave the ith element
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "   ";
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int k = 4; //no. of elements by which to rotate
	int size = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, size);
	rotate_left(arr, size, k);
	cout << endl
	     << "Array after rotation   ";
	printArray(arr, size);
	cout << endl;
}
