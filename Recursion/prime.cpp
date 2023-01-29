#include<bits/stdc++.h>
using namespace std;


string isPrime(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        // Write your logic here
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt == 2){
        return "Yes";
    }
    return "No";
}
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << isPrime(n) <<endl;
  }
}