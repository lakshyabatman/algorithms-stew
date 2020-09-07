/**
 * 
 * https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
 * */


#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--) {
	    int n1,n2;
	    string s1,s2;
	    cin >> n1 >> n2;
	    cin >> s1>> s2;
	    vector<vector<int>> dp(n1+1,vector<int> (n2+1,0));
	    for(int i =0;i<=n1;i++) {
	        dp[i][0] = 0;
	    }
	    for(int i=0;i<=n2;i++) {
	        dp[0][i] = 0;
	    }
	    for(int i=1;i<=n1;i++) {
	        for(int j =1;j<=n2;j++) {
	          if(s1[i-1] == s2[j-1]) {
	              dp[i][j] = dp[i-1][j-1]+1;
	          }else {
	              dp[i][j] = max(dp[i][j-1] ,dp[i-1][j]);
	          }
	        }
	    }
	    cout << dp[n1][n2]<<endl;
	}
	return 0;
}