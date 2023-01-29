#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int num){
        if(num<=1){
            return num;
        }
        int fs = solve(num-1);
        int sec = solve(num-2);
        return fs+sec;
    }
    int fib(int n) {
        return solve(n);
    }
};

int main(){
  int t;
  cin >> t;
  while(t--)
  {
    int N;
    cin >> N;
    Solution ob;
    cout << ob.fib(N);
    cout << "\n";
  }
}