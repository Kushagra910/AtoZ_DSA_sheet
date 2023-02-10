#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  //precompute
  //when excluxivity of characters are not given make 256 size of array and hash characters
  int hash[256] = {0};
  for(int i = 0;i<s.size();i++){
    hash[s[i]]+=1;
  }
  int q;
  cin >> q;
  while(q--){
    char c;
    cin >> c;
    //fetch
    cout << hash[c] << endl;
  }
  return 0;
}