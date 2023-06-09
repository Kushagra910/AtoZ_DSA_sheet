// 81.Search In A Rotated Sorted Array II

// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.


// TC = average(log n)
// TC = worst(O(N/2))
class Solution {
public:
    bool search(vector<int>& A, int key) {
        int n = A.size();
        int lo = 0;
        int hi = n - 1;
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            if(A[mid] == key) return true;
            if(A[lo] == A[mid] && A[mid] == A[hi]){
                lo = lo + 1;
                hi = hi - 1;
                continue;
            }
            if(A[lo] <= A[mid]){
                if(A[lo] <= key && key <= A[mid]){
                    hi = mid -1;
                }
                else{
                    lo = mid + 1;
                }
            }
            else{
                if(A[mid] <= key && key <= A[hi]){
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
        }
        return false;
    }
};