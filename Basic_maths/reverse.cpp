#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int rev =0;
    while(n>0){
        int last_digit = n % 10;
        rev = rev*10 + last_digit;
        n = n /10;
    }
    cout << rev << endl;;
}
