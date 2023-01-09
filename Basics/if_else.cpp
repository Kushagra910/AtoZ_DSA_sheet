#include<bits/stdc++.h>
using namespace std;

int main(){
  // int age;
  // cin >> age;
  // if(age>=18) {
  //   cout << "you are a Adult";
  // }
  // else {
  //   cout << "you are not a Adult";
  // }

  int marks;
  cin >> marks;
  if (marks<25) {
    cout << "F";
  }
  else if (marks<=44) {
    cout << "E";
  }
  else if (marks <=49) {
    cout << "D";
  }
  else if (marks <= 59){
    cout << "C";
  }
  else if (marks <= 79) {
    cout << "B";
  }
  else {
    cout << "A";
  }
  return 0;
}