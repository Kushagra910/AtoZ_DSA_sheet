// brute force
// find all permutations
// then do linear search 
// and return i+1 permutation
// TC = O(N!*N);


// better -> STL

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};

// OPtimal
// TC = O(3*N);
// SC = O(1);
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
       int ind =-1;
       for(int i=n-2;i>=0;i--){
           if(nums[i]<nums[i+1]){
               ind = i;
               break;
           }
       }
       if(ind == -1 ){
           reverse(nums.begin(),nums.end());
           return;
       }
       for(int i=n-1;i>ind;i--){
           if(nums[i]>nums[ind]){
               swap(nums[i],nums[ind]);
               break;
           }
       }
       reverse(nums.begin()+ind+1,nums.end());
    }
};