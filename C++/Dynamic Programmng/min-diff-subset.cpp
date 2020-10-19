#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--) {
	  int n;
	  cin >> n;
	  vector<int> arr(n);
	  int i =0;
	  while(i<n) {
	      cin >> arr[i];
	      i++;
	  }
	  int sum = 0;
	  for(int i : arr) sum+=i;
	  
	  vector<vector<bool>> dp(n+1,vector<bool> ((sum/2)+1,false));
	  dp[0][0] = true;
	  for(int i =1;i<=n;i++) {
	      dp[i][0]= true;
	  }
	  for(int i =1;i<=(sum/2);i++) {
	      dp[0][i]=false;
	  }
	  for(int i =1;i<=n;i++ ) {
	      for(int j=1;j<=(sum/2);j++) {
	         dp[i][j] = dp[i-1][j];
	         if(arr[i-1]<=j) {
	             dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i][j];
	         }
	      }
	  }
	  int diff= INT_MAX;
	  for (int j=sum/2; j>=0; j--){ 
	    if (dp[n][j] == true)  { 
            diff = sum-2*j; 
            break; 
        } 
	      
	  } 
        cout << diff<<endl;
	}
	return 0;
}