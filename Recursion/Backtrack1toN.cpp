#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve (int ind,int N)
    {
        if(ind < 1) return;
        solve(ind-1,N);
        cout << ind << " ";
    }
    void printNos(int N)
    {
         solve(N,N);
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
    ob.printNos(N);
    cout << "\n";
  }
}