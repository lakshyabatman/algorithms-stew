/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */



// @lc code=start
class Solution {
#define lli long long int
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        if(nums.size() ==0)  return 0;
        lli sum = 0;
        for(int i : nums) sum+=i;
        if((sum+S)%2 ==1 || abs(S) > sum) return 0;
        lli target =(S+sum)/2;
        lli n = nums.size();
        vector<vector<lli>> dp(target+1, vector<lli> (n+1,0) );
        dp[0][0] = 1;
        for(lli i=0;i<=target;i++) {
            for(lli j=1;j<=n;j++) {
                dp[i][j] = dp[i][j-1];
                if(nums[j-1]<=i) {
                    dp[i][j]+=dp[i-nums[j-1]][j-1];
                }
            }
        }
        
        
        return dp[target][n];
    }
};
// @lc code=end

