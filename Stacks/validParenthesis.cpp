// 20. Valid Parentheses - Leetcode

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// TC = O(N)
// SC = O(N)

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    char ch = st.top();
                    if( s[i] == ')' && ch == '('){
                        st.pop();
                    }
                    else if(s[i] ==']' && ch == '[' ){
                        st.pop();
                    }
                    else if(s[i] == '}' && ch == '{'){
                        st.pop();
                    }
                    else {
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }
        }

        if( st.empty()){
            return true;
        }
        else return false;
    }
};