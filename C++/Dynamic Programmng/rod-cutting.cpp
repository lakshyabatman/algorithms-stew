/**
 * 
 * https://practice.geeksforgeeks.org/problems/cutted-segments/0
 * 
 * */


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--) {
	    int n;
	    cin >> n;
	    vector<int> arr(3,0);
	    cin >> arr[0]>>arr[1]>>arr[2];
	    sort(arr.begin(),arr.end());
	    vector<vector<int>> dp(n+1,vector<int>(3,0));
	    for(int i=0;i<3;i++) {
	        dp[0][i] = 0;
	    }
	    
	    for(int i=1;i<=n;i++) {
	        for(int j=0;j<3;j++) {
	            
	            if(j == 0) {
	                if(i%arr[j]==0) {
	                    dp[i][j] = i/arr[j];
	                }else {
	                    dp[i][j] = 0;
	                }
	            }else {
	                if(i< arr[j] ) {
	                    dp[i][j] = dp[i][j-1];
	                }else {
	                    if(dp[i][j-1]== 0 && dp[i-arr[j]][j]==0 && i-arr[j]!=0 ) {
	                    dp[i][j] = 0;
	                    }else {
	                       	dp[i][j] = max(dp[i-arr[j]][j]+1,dp[i][j-1]);
	                    }
	                }
	            }
	        }
	    }
	    cout<<dp[n][2]<<endl;
	}
	return 0;
}