/**
 * 
 * https://practice.geeksforgeeks.org/problems/longest-common-substring/0
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
	    int len1,len2;
	    string s1,s2;
	    cin >> len1 >> len2;
	    cin >> s1 >> s2;
	    vector<vector<int>> dp(len1+1,vector<int>(len2+1,0));
	    
	    for(int i=0;i<=len1;i++) {
	        dp[i][0] = 0;
	    }
	    for(int i=0;i<=len2;i++) {
	        dp[0][i] = 0;
	    }
	    int res =0;
	    for(int i=1;i<=len1;i++) {
	        for(int j=1;j<=len2;j++) {
	            if(s1[i-1] == s2[j-1]) {
	                dp[i][j] = dp[i-1][j-1]+1;
	            }else {
	                dp[i][j] = 0;
	            }
	            res =max(res,dp[i][j]);
	           // cout << dp[i][j]<<" ";
	        }
	       // cout<<endl;
	    }
	    cout << res<<endl;
	}
	return 0;
}