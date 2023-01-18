#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int dup = n;
        int sum = 0;
        int cnt = 0;
        while(n!=0){
            int ld = n % 10;
            sum = sum + pow(ld,3);
            n = n /10;
        }
        if(dup == sum){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    Solution ob;
    cout << ob.armstrongNumber(n) << endl;
  }
}