// Brute force TC = O(N*2);
// SC O(1);

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};

// Better Solution
// TC - O(Nlogn);
// SC - O(N);

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int rem = target - a;
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem],i};
            }
            mpp[a] = i;
        }
        return {-1,-1};
    }
};