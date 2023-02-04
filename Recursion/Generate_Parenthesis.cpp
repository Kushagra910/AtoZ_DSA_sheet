#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void solve(int op_cnt,int clo_cnt,int n,vector<string>&ans ,string temp){
        if(op_cnt == n &&  clo_cnt == n){
            ans.push_back(temp);
            return ;
        }
        if(op_cnt<n){

            solve(op_cnt+1,clo_cnt,n,ans,temp+'(');
        }
        if(clo_cnt<op_cnt){
    
            solve(op_cnt,clo_cnt+1,n,ans,temp+')');
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        string temp="";
        solve(0,0,n,ans,temp);
        return ans;
    }
};


int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    Solution ob;
    vector<string>result = ob.AllParenthesis(n);
    sort(result.begin(),result.end());
    for(int i =0;i<result.size();i++){
      cout<<result[i]<<endl;
    }
  }
  return 0;
}