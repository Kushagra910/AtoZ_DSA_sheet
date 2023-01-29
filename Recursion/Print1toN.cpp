#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void f(int ind , int n) {
        if(ind > n) return ;
        cout << ind << " ";
        f(ind+1,n);
    }
    void printNos(int N)
    {
        int  i = 1;
        f(i,N);
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