/*
 * @lc app=leetcode id=846 lang=cpp
 *
 * [846] Hand of Straights
 */

// @lc code=start
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        if(hand.size()%W ) return false;
        map<int,int> mp;
        for(int i : hand) mp[i]++;
        while(mp.size()>0) {
            int t= mp.begin()->first;
            int freq = mp.begin()->second;
            // cout << t << " "<< freq<<endl;
            for(int j =t;j<W+t;j++) {
                // cout << "JI"<<endl;
                if(mp[j]<freq) return false;
                if(mp[j] == 1) {
                    mp.erase(j);
                }else {
                    mp[j]--;
                }
            }
   
        }
        return true;
    }
};
// @lc code=end

