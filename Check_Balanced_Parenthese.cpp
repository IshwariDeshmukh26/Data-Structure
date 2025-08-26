//Stack — Check for Balanced Parentheses

#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for(char c : s) {
        if(c == '(') st.push(c);
        else if(c == ')') {
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string input = "((()))";
    cout << (isBalanced(input) ? "Balanced" : "Not Balanced");
    return 0;
}
