// codeStudio 
// TC - O(N^3);
// SC - O(1);

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxi  = LONG_MIN;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            long long sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
                maxi = max(maxi,sum);
            }
        }
    }
    if(maxi<0) maxi = 0;
    return maxi;
}

// better Approach 
// TC=O(N^2)
// SC = O(1);

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxi  = LONG_MIN;
    for(int i =0;i<n;i++){
        long long sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            maxi = max(maxi,sum);
        }
    }
    if(maxi<0) maxi = 0;
    return maxi;
}

//Optimal Approach
// Kadane's Algorithm
// TC = O(N);
// SC = O(1);
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxi  = LONG_MIN;
    long long sum = 0;
    for(int i =0;i<n;i++){
        sum += arr[i];
        maxi = max(maxi,sum);
        if(sum<0) sum = 0;
    }
    if(maxi<0) maxi = 0;
    return maxi;
}