
/**
 * 
 * https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions/0
 * 
 * */

#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test --) {
	    int n1,n2;
	    cin >> n1 >>n2;
	    string s1,s2;
	    cin >> s1>>s2;
	    vector<vector<int>> dp(n1+1,vector<int> (n2+1));
	    for(int i =0;i<=n1;i++) dp[i][0] = 0;
	    for(int j=0;j<=n2;j++) dp[0][j] =0;
	    for(int i =1;i<=n1;i++) {
	        for(int j = 1;j<=n2;j++) {
	            if(s1[i-1] == s2[j-1]) {
	                dp[i][j] = dp[i-1][j-1]+1;
	            }else {
	                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
	            }
	        }
	    }
	    int res = dp[n1][n2];
	    cout<< abs(n2-res) + abs(n1-res)<<endl;
	}
	return 0;
}