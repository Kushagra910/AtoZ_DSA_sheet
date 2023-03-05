// codeStudio,GFG working
// leetcde TLE - due to constraints

#include <bits/stdc++.h>

int func(vector<int>&arr,int lo,int hi){
    int pivot = arr[lo];
    int i = lo;
    int j = hi;
    while(i<j){
        while(arr[i]<=pivot && i<=hi-1){
            i++;
        }
        while(arr[j]>pivot && j>=lo+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[lo],arr[j]);
    return j;
}

void qs(vector<int>&arr,int lo,int hi){
    if(lo<hi){
        int partition_index = func(arr,lo,hi);
        qs(arr,lo,partition_index-1);
        qs(arr,partition_index+1,hi);
    }
}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qs(arr,0,arr.size()-1);
    return arr;
    
}