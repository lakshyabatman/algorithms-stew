
/**
 * https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence/0
 * 
 * */

#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--) {
	    int n1;
	    string s;
	    cin >> n1;
	    cin >> s;
	    vector<vector<int>> dp(n1+1,vector<int> (n1+1,0));
	    for(int i =0;i<=n1;i++) {
	        dp[i][0] = 0;
	    }
	    for(int i=0;i<=n1;i++) {
	        dp[0][i] = 0;
	    }
	    for(int i=1;i<=n1;i++) {
	        for(int j =1;j<=n1;j++) {
	          if(s[i-1] == s[j-1] && i!=j) {
	              dp[i][j] = dp[i-1][j-1]+1;
	          }else {
	              dp[i][j] = max(dp[i][j-1] ,dp[i-1][j]);
	          }
	        }
	    }
	    cout << dp[n1][n1]<<endl;
	}
	return 0;
}