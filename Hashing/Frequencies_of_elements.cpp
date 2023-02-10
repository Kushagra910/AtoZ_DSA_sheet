#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int vec[P] ={0};
        for(int i = 0;i<N;i++){
            vec[arr[i]-1]++;
        }
        if(P<=N){
            for(int i = 0;i<P;i++){
                arr[i] = vec[i];
            }
            for(int i = P;i<N;i++){
                arr[i] = 0;
            }
        }
        else{
            for(int i = 0;i<N;i++){
                arr[i] = vec[i];
            }
        }
    }
};

int main(){
  long long t;
  cin >> t;
  while(t--){
    int  N,P;
    cin>> N;
    vector<int>arr(N);
    for(int i =0;i<N;i++){
      cin>>arr[i];
    }
    cin >> P;
    Solution ob;
    ob.frequencyCount(arr,N,P);
    for(int i =0;i<N;i++){
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  return 0;
}