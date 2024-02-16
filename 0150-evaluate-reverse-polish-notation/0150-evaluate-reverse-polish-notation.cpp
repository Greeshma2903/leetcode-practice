class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
                tokens[i] == "/") {
                // pop top operands
                int op1 = nums.top();
                nums.pop();
                int op2 = nums.top();
                nums.pop();
                // add calculated value to nums
                if (tokens[i] == "+")
                    nums.push(op1 + op2);
                else if (tokens[i] == "-")
                    nums.push(op2 - op1);
                else if (tokens[i] == "*")
                    nums.push(op1 * op2);
                else
                    nums.push(op2 / op1);
            } else {
                // push operand to stack
                nums.push(stoi(tokens[i]));
            }
        }
        // top of stack will store final eval answer
        return nums.top();
    }
};