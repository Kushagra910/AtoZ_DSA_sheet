#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       if(R==0) return 1;
       long long ans = power(N,R/2);
       ans = (ans*ans)%mod;
       if(R%2){
           return (ans*N)%mod;
       }
       return ans;
    }

};

long long rev(long long n){
  long rev_num = 0;
  while(n>0){
    rev_num = rev_num*10 + n%10;
    n = n /10;
  }
  return rev_num;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    long long N;
    cin >> N;
     long long R =0;
     R = rev (N);
     Solution ob;
     long long ans = ob.power(N,R);
     cout << ans << endl;
  }
}




/*

Leetcode solution --

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long dup = n;
        if(dup<0) dup = -1*dup;
        while(dup>0){
            if(dup%2){
                ans = ans*x;
                dup = dup -1;
            }
            else{
                x = x * x;
                dup = dup/2;
            }
        }
        if(n<0){
            ans = (double)1/(double)(ans);
        }
        return ans;
    }
};

*/