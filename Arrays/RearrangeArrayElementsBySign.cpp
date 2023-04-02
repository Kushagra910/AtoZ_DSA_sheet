// brute force leetcode 
// TC O(2N)
//  SC - O(N)


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        vector<int>pos;
        vector<int>neg;
        for(auto it:nums){
            if(it<0) neg.push_back(it);
            else pos.push_back(it);
        }
        int index = 0;
        for(int i=0;i<pos.size();i++){
            ans[2*i] = pos[i];
            ans[2*i+1] = neg[i];
        }
        return ans;
    }
};


//  optimal 
// TC - O(N)
// SC = O(N)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int posIndex = 0;
        int negIndex = 1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};


// Variety 2 
// when number pos and neg are not equal
// TC= O(2*N)
// SC= O(N);

class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0) neg.push_back(arr[i]);
	        else pos.push_back(arr[i]);
	    }
	    if(pos.size()>neg.size()){
	        for(int i=0;i<neg.size();i++){
	            arr[i*2] = pos[i];
	            arr[i*2+1] = neg[i];
	        }
	        int index = neg.size()*2;
	        for(int i=neg.size();i<pos.size();i++){
	            arr[index] = pos[i];
	            index++;
	        }
	    }
	    else{
	        for(int i=0;i<pos.size();i++){
	            arr[i*2] = pos[i];
	            arr[i*2+1] = neg[i];
	        }
	        int index = pos.size()*2;
	        for(int i=pos.size();i<neg.size();i++){
	            arr[index] = neg[i];
	            index++;
	        }
	    }
	    
	}
};