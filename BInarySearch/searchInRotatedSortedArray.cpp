// 33. Search in Rotated Sorted Array

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.



class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n = arr.size();
        int lo = 0;
        int hi = n - 1;
        while(lo <= hi){
            int mid = (lo + hi )/2;
            if(arr[mid] == k) return mid;
            if(arr[lo] <= arr[mid]){
                if(arr[lo] <= k && k<= arr[mid]){
                    hi = mid -1;
                }
                else{
                    lo = mid + 1;
                }
            }
            else{
                if(arr[mid] <= k && k<= arr[hi]){
                    lo = mid + 1;
                }
                else {
                    hi = mid - 1;
                }
            }
        }
        return -1;
    }
};