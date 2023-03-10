// codeStudio solution
// time-complexity = O(N);
// space-complexity = O(1); --> for extra space
// space-complextiy to solve the problem --> O(N);

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}
