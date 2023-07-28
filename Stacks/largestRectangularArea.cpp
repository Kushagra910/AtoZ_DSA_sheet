// 84. Largest Rectangle in Histogram Leetcode
// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

// brute Force

class Solution {
public:

    vector<int>nextSmallerIndex(vector<int>&heights){
        vector<int>ans(heights.size());
        stack<int>st;
        st.push(-1);
        int n = heights.size();
        for(int i=n-1;i>=0;i--){
            int curr = heights[i];
            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

     vector<int>prevSmallerIndex(vector<int>&heights){
        vector<int>ans(heights.size());
        stack<int>st;
        st.push(-1);
        int n = heights.size();
        for(int i=0;i<n;i++){
            int curr = heights[i];
            while(st.top()!= -1 && heights[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }


    int largestRectangleArea(vector<int>& heights) {
        vector<int>prev = prevSmallerIndex(heights);
        vector<int>next = nextSmallerIndex(heights);
        int maxArea = INT_MIN;
        for(int i=0;i<heights.size();i++){
            int length = heights[i];
            if(next[i] == -1) {
                next[i] = heights.size();
            }
            int width = next[i] - prev[i] - 1;
            
            int area = length * width;
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};