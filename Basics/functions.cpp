#include<bits/stdc++.h>
using namespace std;

// void printName(string name) {
//   cout << "Hey "<< " " << name ;
// }

// int sum(int num1,int num2) {
//   int num3 = num1 + num2;
//   return num3;
// }

void doSomething(int &num) {
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num <<endl;
}

int main() {
  // string name;
  // cin >> name;
  // printName(name);
  // int num1 , num2;
  // cin >> num1 >> num2;
  // int res = sum(num1,num2);
  // cout << res;

  int num = 10;
  doSomething(num);
  cout << num << endl;
  return 0;
}