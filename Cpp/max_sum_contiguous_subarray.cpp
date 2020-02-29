# include<bits/stdc++.h>
using namespace std;
int start = 0, endd = 0, s = 0;

int max_sum_subarray(int arr[], int n)
{
    int max_til_here = arr[0];
    int global_max = arr[0];
    for (int i = 0;i < n; i++)
    {
        max_til_here += arr[i];
        //max_til_here = max(max_til_here, arr[i]);
        if (max_til_here < arr[i])
        {
            max_til_here = arr[i];
            s = i;
        }
       //global_max = max(max_til_here, global_max);
       if(global_max < max_til_here)
       {
           global_max = max_til_here;
           start = s;
           endd = i;
       }
   }
   return global_max;
}
//int slide(int arr, int n)

int main()
{
    int a[] = {1,2,3,-4,-5,6,5};
    cout << endl << max_sum_subarray(a, sizeof(a)/sizeof(a[0])) << endl;
    for (int i = start; i <= endd ; i++)
        cout << a[i];
  //cout<<endl<<start;   
    return 0;
}
