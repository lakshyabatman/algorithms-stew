/**
 * 
 * https://practice.geeksforgeeks.org/problems/coin-change/0
 * 
 * 
 * */


#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--) {
	    int n;
	    cin>> n;
	    vector<int> arr(n);
	    for(int i =0;i<n;i++) {
	        cin >>arr[i];
	    }
	    int target;
	    cin >> target;
	    vector<vector<int>> dp(target+1,vector<int>(n,0));
	    for(int i=0;i<n;i++) {
	        dp[0][i] = 1;
	    }
	    
	    for(int i=1;i<=target;i++) {
	        for(int j =0;j<n;j++) {
	            if(j ==0) {
	                if(i%arr[j] == 0) {
	                    dp[i][j] = 1;
	                }else {
	                    dp[i][j] = 0;
	                }
	            }else {
    	            if(arr[j]<=i) {
    	                dp[i][j] = dp[i][j-1] +dp[i-arr[j]][j];
    	            }else {
    	               dp[i][j] = dp[i][j-1];
    	            }
	            }
	           // cout << dp[i][j]<<" ";
	            
	        }
	       // cout <<endl;
	    }
	    cout << dp[target][n-1]<<endl;
 	}
	return 0;
}