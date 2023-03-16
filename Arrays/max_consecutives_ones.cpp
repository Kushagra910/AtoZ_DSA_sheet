//  Leetcode 458
// TC = O(n); Optimised
// SC = O(1);
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt =0;
        int  maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else{
                cnt  = 0;
            }
        }
        return maxi;
    }
};