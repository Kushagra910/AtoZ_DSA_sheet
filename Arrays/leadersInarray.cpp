// brute force gfg problem
// TC = O(n^2);
// SC = O(n);

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int i = 0;
        int j = n-1;
        int flag = true;
        while(i<n && j>=0){
            if(a[i]>=a[j]){
                j--;
                flag = true;
            }
            else{
                i++;
                j = n-1;
                flag = false;
            }
            if(flag == true ) {
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};

// Optimal 
// TC = O(2*N)
// SC = O(N)
// gfg problem
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int maxi = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=maxi) {
                ans.push_back(a[i]);
            }
            maxi = max(maxi,a[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};