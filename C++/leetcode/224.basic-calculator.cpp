/*
 * @lc app=leetcode id=224 lang=cpp
 *
 * [224] Basic Calculator
 */





// @lc code=start
class Solution {

public:
    bool isOperator(char op) {
        return (op == '-' || op == '+' ) ? true : false; 
    }
    int doOperation(char op, int operand1,int operand2) {
        if(op == '-') return operand1-operand2;
        return operand1+ operand2;
    }
    int calculate(string s) {
        stack<char> op;
        stack<int> operand;
        for(char ch : s) {
            if(ch == '(') {
                op.push(ch);
            }else if(ch == ')') {
                // pop last operator and latr two operands and cal and pop the last open bracket
                char operation = op.top();
                op.pop();
                int operand1 = operand.top();
                operand.pop();
                int operand2 = operand.top();
                operand.pop();
                int result = doOperation(operation, operand1,operand2);
                operand.push(result);
                //remove the opening brackcet;
                op.pop();

            }else if(isOperator(ch)) {
                if(op.empty()) {
                    op.push(ch);
                }else {
                    char temp = op.top();
                    if(temp == '(') {
                        op.push(ch);
                    }else {
                        char operation = op.top();
                        op.pop();
                        int operand1 = operand.top();
                        operand.pop();
                        int operand2 = operand.top();
                        operand.pop();
                        int result = doOperation(operation, operand1,operand2);
                        operand.push(result);
                        op.push(ch);
                    }
                }
            }else {
                if(ch == ' ') continue;
                operand.push(ch-'1'+1);
            }
        }

        while(!op.empty()) {
            char operation = op.top();
            op.pop();
            int operand1 = operand.top();
            operand.pop();
            int operand2 = operand.top();
            operand.pop();
            int result = doOperation(operation, operand1,operand2);
            operand.push(result);
        }
        return operand.top();
    }
};
// @lc code=end

