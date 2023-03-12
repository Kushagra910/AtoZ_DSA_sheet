#include <bits/stdc++.h> 
#include <iostream>
using namespace std;


// TC = O(2N);
// SC = O(1);
void rotate(int a[],int n,int d){
    d = d%n;
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    int arr[n] = {0};
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >>  k;
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}