#include <bits/stdc++.h>

using namespace std;

int calculate(std::string s) {
        std::stack<int> stack;
        int currNum = 0;
        char operator0 = '+';
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            char currChar = s[i];

            if (isdigit(currChar)) {
                currNum = currNum * 10 + (currChar - '0');
            }

            if (!isdigit(currChar) && !isspace(currChar) || i == n - 1) {
                if (operator0 == '+') {
                    stack.push(currNum);
                } else if (operator0 == '-') {
                    stack.push(-currNum);
                } else if (operator0 == '*') {
                    int top = stack.top();
                    stack.pop();
                    stack.push(top * currNum);
                } else if (operator0 == '/') {
                    int top = stack.top();
                    stack.pop();
                    // Ensure truncation towards zero for integer division
                    stack.push(top / currNum);
                }

                operator0 = currChar;
                currNum = 0;
            }
        }

        int result = 0;
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }

        return result;
    }

int main() {
    string expression;
    cout << calculate(expression) << endl;
    return 0;
}