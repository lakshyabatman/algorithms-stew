
/* find largest subarray with constant difference between adjacent elements. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
      int T;      //testcses
      cin >> T;
      for (int t = 1; t <= T; t++)
      {
            int n;      // length of array
            cin >> n;
            int arr[n];       //={10, 7, 4, 6, 8, 10, 11};
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            for (int i = 0; i < n - 1; i++)
            {
                  arr[i] = arr[i + 1] - arr[i];
            }

            // for (int i = 0; i < n; i++)
            // {
            //       cout << arr[i];
            // }

            int maxl = 1, cnt = 0;
            int check = arr[0];

            for (int i = 0; i < n - 1; i++)
            {
                  if (check == arr[i])
                        cnt++;
                  else
                  {
                        maxl = max(maxl, cnt);
                        cnt = 1;
                        check = arr[i];
                  }
                  maxl = max(maxl, cnt);
            }
            cout << "Case #" << t << ": " << maxl + 1 << endl;          //output
      }
}
