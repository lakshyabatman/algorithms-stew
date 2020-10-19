
/* Find largest subarray with with equal no. of 0's and 1's in a binary array */

#include <bits/stdc++.h>
using namespace std;
int main()
{
      vector<int> a ={ 1, 0, 0, 1, 0, 1, 1 };
      unordered_map<int, int> mymap;
      int curr_len, max_len = 0, sum = 0;
      for (int i = 0; i < a.size(); i++)
            a[i] = (a[i] == 0) ? -1 : 1;
      
      for (int i = 0; i < a.size(); i++)
      {
            sum += a[i];
            
            if(sum == 0)
            {
                  curr_len = i - 0;
                  max_len = max(max_len, curr_len);
            }
            if(mymap.find(sum) != mymap.end())
            {
                  curr_len = i - mymap[sum];
                  max_len = max(max_len, curr_len);
            }
            else
            {
                  mymap[sum] = i;
            }
                       
      }

      cout << max_len<<endl;
        for (int i = 0; i < a.size(); i++)
            cout << a[i]<<" ";
cout <<endl;
}