// Next Greater Element GFG

// Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.\

// TC = O(N);
// SC = O(N);

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>st;
        vector<long long>v(arr.size());
        for(int i=n-1;i>=0;i--){
            long long curr = arr[i];
            while(!st.empty() && st.top() <= curr){
                st.pop();
            }
            if(!st.empty()){
                v[i] = st.top();
            }
            else{
                v[i] = -1;
            }
            st.push(curr);
        }
        return v;
    }
};