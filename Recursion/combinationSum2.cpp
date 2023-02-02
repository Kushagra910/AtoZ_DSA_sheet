/*
  LEETCODE-
  class Solution {
public:
    void solve(int ind,vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int>ds){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        for(int i =ind;i<candidates.size();i++){
            if(candidates[i]>target) break;
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            ds.push_back(candidates[i]);
            solve(i+1,candidates,target-candidates[i],ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,candidates,target,ans,ds);
        return ans;
    }
};
*/