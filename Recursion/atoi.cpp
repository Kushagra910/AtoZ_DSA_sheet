#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int solve(int ans,int sign,string &str,int ind){
        if(ind>=str.size()){
            return sign*ans;
        }
        if(str[ind]<'0' || str[ind]>'9') return -1;
        ans = (ans*10 + str[ind]-'0');
        return solve(ans,sign,str,ind+1);
    }
    /*You are required to complete this method */
    int atoi(string str) {
        int ans = 0;
        int sign = 1;
        int ind = 0;
        if(str[0] == '-') {
            sign = -1;
            ind = ind + 1;
        } 
        return solve(ans,sign,str,ind);
    }
};


int main(){
  int t;
  cin >>t;
  while(t--){
    string s;
    cin >> s;
    Solution ob;
    cout << ob.atoi(s) <<endl;
  }
}