// INTERVIEW BIT

// The only argument given is integer array A.
// Return the integar array G such that G[i] contains nearest smaller number than A[i].If no such element occurs G[i] should be -1.
// TC =O(N);
// SC = O(N);
vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int>ans(A.size());
    stack<int>st;
    st.push(-1);
    for(int i=0;i<A.size();i++){
        int curr = A[i];
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}