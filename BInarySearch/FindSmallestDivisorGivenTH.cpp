// 1283. Find the Smallest Divisor Given a Threshold

// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.
// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).
// The test cases are generated so that there will be an answer.

// Brute Force = > TLE
// TC = O(max(arr)*n)

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = *max_element(nums.begin(),nums.end());
        for(int d  = 1;d<=n;d++){
            int sum = 0;
            for(int i=0;i<nums.size();i++){
                sum += ceil((double)nums[i]/(double)d);
            }
            if(sum <= threshold) return d;
        }
        return 0;
    }
};

// Optimised 
// BS on Answers -> finded Pattern
// TC = O(log(max(arr))*n)

class Solution {
public:
    int processedSum(vector<int>&nums,int divisor){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i]/(double)divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1;
        int hi = *max_element(nums.begin(),nums.end());
        while(lo<=hi){
            int mid = (lo + hi)/2;
            if(processedSum(nums,mid) <= threshold){
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};