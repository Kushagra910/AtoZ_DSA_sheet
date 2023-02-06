// LEETCODE problem-46 
class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>&vis,vector<int>&ds,int n){
       // T.C = n!*n
       // S.C = O(n)+O(n)
        if(ds.size() == n){
            ans.push_back(ds);
            return ;
        }
        for(int i =0;i<n;i++){
            if(!vis[i]){
                ds.push_back(nums[i]);
                vis[i] = 1;
                solve(nums,ans,vis,ds,n);
                ds.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>vis(n,0);
        vector<int>ds;
        solve(nums,ans,vis,ds,n);
        return ans;
    }
};