#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int n=N;
        // here N was changing that is why a copy is used here
        while(n>0){
            int last_digit = n % 10;
            if (last_digit!=0 &&  N % last_digit == 0){
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};

int main() {
  int t;
  cin >> t;
  for(int i = 0;i<t;i++){
    int n;
    cin>>n;
    Solution ob;
    int ans= ob.evenlyDivides(n);
    cout << ans << endl;
  }
  return 0;
}