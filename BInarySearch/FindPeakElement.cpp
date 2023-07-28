// 162. Find Peak Element
// A peak element is an element that is strictly greater than its neighbors.
// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
// You must write an algorithm that runs in O(log n) time.

// brute force is Linear search TC = O(n) , SC = O(1)
// Optimised way is to apply binary search beacuse int the question we have to do searching and it exhibits sorted nature in some parts of array either increasing or decreasing

// TC = O(logN)
// SC =O(1)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int lo = 1;
        int hi = n-2;
        while(lo<=hi){
            int mid = (lo + hi)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                lo = mid + 1;
            }
            else if(nums[mid]>nums[mid+1]){
                hi = mid - 1;
            }
            else{
                lo = mid + 1 ;// case when mid is at reverse of peak point so eliminate any part otherwise it will fall in infinite loop;
            }
        }
        return -1;
    }
};