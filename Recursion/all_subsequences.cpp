#include<bits/stdc++.h>
using namespace std;


class Solution{
	public:
	    void solve(int ind,string &s,vector<string>&ans,string temp){
	        if(ind>=s.size()){
	           if(temp.size()>=1){
	               ans.push_back(temp);
	           }
	           return ;
	        }
	        temp.push_back(s[ind]);
	        solve(ind+1,s,ans,temp);
	        temp.pop_back();
	        
	        solve(ind+1,s,ans,temp);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    string temp ="";
		    solve(0,s,ans,temp);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    Solution ob;
    vector<string> res = ob.AllPossibleStrings(s);
    for(auto i:res){
      cout<<i<< " ";
    }
    cout << endl;
  }
  return 0;
}