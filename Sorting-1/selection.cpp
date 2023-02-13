#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
  for(int i = 0;i<=n-2;i++){
    int mini = i;
    for(int j = i;j<=n-1;j++){
      if(arr[j]<arr[mini]){
        int temp = arr[mini];
        arr[mini] =arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  selection_sort(arr,n);
  for(auto it:arr){
    cout << it << " ";
  }
  return 0;
}