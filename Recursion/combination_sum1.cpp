#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void solve(int ind,vector<int> &a, int B,vector<vector<int>>&ans,vector<int>ds){
        if(ind == a.size()){
            if(B == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(a[ind]<=B){
            ds.push_back(a[ind]);
            solve(ind,a,B-a[ind],ans,ds);
            ds.pop_back();
        }
        solve(ind+1,a,B,ans,ds);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        set<int>st(A.begin(),A.end());
        vector<int>a(st.begin(),st.end());
        vector<vector<int>>ans;
        vector<int>ds;
        sort(A.begin(),A.end());
        solve(0,a,B,ans,ds);
        return ans;
    }
};


int main(){
  int t;
  cin >>t;
  while(t--){
    int n;
    cin >>n;
    vector<int>A;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      A.push_back(x);
    }
    int sum;
    cin>>sum;
    Solution ob;
    vector<vector<int>> result = ob.combinationSum(A,sum);
    if(result.size() == 0){
      cout<<"Empty";
    }
    for(int  i=0;i<result.size();i++){
      cout<<'(';
      for(int j=0;j<result[i].size();j++){
        cout<<result[i][j];
        if(j<result[i].size()-1){
          cout<<" ";
        }
      }
      cout<<")";
    }
        cout<<endl;
  }
  return 0;
}