#include<bits/stdc++.h>
using namespace std;

class Solution {
    long long gcd (long long a,long long b){
        while(a>0 && b>0){
            if(a>b) a  = a%b;
            else b = b%a;
        }
        if(a == 0) return b;
        else return a;
    }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>ans;
        long long gd = gcd(A,B);
        long long lm = (A*B)/gcd(A,B);
        ans.push_back(lm);
        ans.push_back(gd);
        return ans;
    }
};
int main(){
  int t;
  cin >> t;
  while(t--){
    long long A,B;
    cin >> A >> B;
    Solution ob;
    vector<long long> ans = ob.lcmAndGcd(A,B);
    cout << ans[0] << " " << ans[1] << endl;
  }
  return 0;
}