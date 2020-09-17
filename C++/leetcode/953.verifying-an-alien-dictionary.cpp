/*
 * @lc app=leetcode id=953 lang=cpp
 *
 * [953] Verifying an Alien Dictionary
 */

// @lc code=start
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> dict(26);
        for(int i=0;i<order.size();i++) {
            dict[order[i]-'a'] = i;
        }
        for(int c =1;c<words.size();c++) {
            cout << c <<endl;
            int i=0;
            int j =0;
            int compare_val = 0;
            while(i<words[c-1].size() && j < words[c].size()) {
                compare_val = dict[words[c-1][i]-'a'] - dict[words[c][j]-'a'];
                if(compare_val!=0) break;
                cout <<i <<" "<<j<<endl;
                i++;
                j++;
            }
            if(compare_val == 0) {
                int diff = words[c-1].size() - words[c].size();
                if(diff> 0) return false;
            }
            if(compare_val>0) return false;
        }
        return true;
    }
};
// @lc code=end

