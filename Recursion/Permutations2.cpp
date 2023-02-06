// Leetcode-47 
//TC-n!*(n*log(n));
//SC-O(n)+O(n) excluding auxillary stack space

class Solution {
public:
    void solve(vector<int>&nums,vector<int>&vis,vector<int>&ds,set<vector<int>>&st,int n){
        if(ds.size() == n){
            st.insert(ds);
            return ;
        }
        for(int i =0;i<n;i++){
            if(!vis[i]){
                vis[i]=1;
                ds.push_back(nums[i]);
                solve(nums,vis,ds,st,n);
                vis[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<int>vis(n,0);
        vector<int>ds;
        set<vector<int>>st;
        solve(nums,vis,ds,st,n);
        vector<vector<int>>res(st.begin(),st.end());
        return res;
    }
};