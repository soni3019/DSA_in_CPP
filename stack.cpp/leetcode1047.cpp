class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        for (char c : s) {
            if (!stack.empty() && stack.top() == c) {
                stack.pop();
            } else {
                stack.push(c); }  }
        string result;
        while (!stack.empty()) {
            result.push_back(stack.top());
            stack.pop(); }
        reverse(result.begin(), result.end());
        return result;
    }
};