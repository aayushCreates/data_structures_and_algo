#include<iostream>
#include<stack>
#include<vector>

using namespace std;

bool check_valid_parentheses(vector<char>& arr) {
    stack<char>st;

    for(auto ch: arr) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if(st.empty()) return false;

            if(ch == ')' && st.top() != '(') return false;
            if(ch == '}' && st.top() != '{') return false;
            if(ch == ']' && st.top() != '[') return false;

            st.pop();
        }
    }

    return st.empty();
}