class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        set<int>st;
        vector<int>vis(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i] == nums2[j] && vis[j] == 0){
                    st.insert(nums1[i]);
                    vis[j] = 1;
                }
            }
        }
        for(auto it:st){
            ans.push_back();
        }
        return ans;
    }
};