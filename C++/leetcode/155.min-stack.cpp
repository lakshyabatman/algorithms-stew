/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> q;
    MinStack() {
        while(!q.empty()) q.pop();
    }
    
    void push(int x) {
        q.push_back(x);
    }
    
    void pop() {
        q.pop_back();
    }
    
    int top() {
        return q[q.size()-1];
    }
    
    int getMin() {
        return q[0];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

