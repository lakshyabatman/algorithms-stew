/**
 * 
 * https://practice.geeksforgeeks.org/problems/number-of-coins/0
 * 
 * */


#include <iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--) {
	    int n,target;
	    cin >>  target >> n;
	    vector<int> arr(n,0);
	    for(int i =0;i<n;i++) {
	        cin >> arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    vector<vector<int>> dp(target+1,vector<int> (n,0));
	    for(int i =0;i<n;i++) {
	        dp[0][i] = 0;
	    }
	    for(int i =1;i<=target;i++) {
	        for(int j=0;j<n;j++) {
	            if(j ==0) {
	                if(i%arr[j]==0) {
	                    dp[i][j] = i/arr[j];
	                }else {
	                    dp[i][j] = INT_MAX-1;
	                }
	            }else {
	                if(i>=arr[j]) {
	                    dp[i][j] = dp[i][j-1];
	                    if(i%arr[j] == 0) {
	                        dp[i][j] = min(dp[i][j],i/arr[j]);
	                    }else {
	                        dp[i][j] = min(dp[i][j],dp[i-arr[j]][j]
	                        +1);
	                    }
	                }else {
	                    dp[i][j] = dp[i][j-1];
	                }
	            }
	        }
	    }
	    int res = (dp[target][n-1]== INT_MAX || dp[target][n-1]== INT_MAX-1) ? -1 : dp[target][n-1];
	    cout << res<<endl;
	}
	return 0;
}