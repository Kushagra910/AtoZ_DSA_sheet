// 32. Longest Valid Parentheses

// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses 
// substring/

//  TC = O(N);
//  SC = O(N);

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        int maxLen = 0;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    int len = i - st.top();
                    maxLen = max(maxLen,len);
                }
                else{
                    st.push(i);
                }
            }
        }
        return maxLen;
    }
};