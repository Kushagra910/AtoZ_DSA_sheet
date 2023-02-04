#include<bits/stdc++.h>
using namespace std;

// Brute Force T.C - O(2^n*n*log(n))

class Solution {

  public:
    void solve(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds, set<vector<int>>&st){
        if(ind == nums.size()) {
            st.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,nums,ans,ds,st);
        ds.pop_back();
        solve(ind+1,nums,ans,ds,st);
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        vector<vector<int>>ans;
        vector<int>ds;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        solve(0,nums,ans,ds,st);
        for(auto &it:st){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
  int t = 1;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0;i< n;i++){
      cin>> nums[i];
    }
    Solution obj;
    vector<vector<int>> ans= obj.printUniqueSubsets(nums);
    sort(ans.begin(),ans.end());
    cout<<"[";
    for(int i=0;i<ans.size();i++){
      cout<<"[";
      for(int j=0;j<ans[i].size();j++) cout<<ans[i][j]<<" ";
      cout<<"]";
    }
    cout<<"]";
  }
  return 0;
}