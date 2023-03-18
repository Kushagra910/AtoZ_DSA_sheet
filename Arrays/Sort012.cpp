// brute force is using simple sorting - merge sort TC-O(nlogn) SC- O(n);
// Better approach 
// TC-O(2N)
// SC - O(1)
//gfg 

class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0) cnt0++;
            else if(arr[i] == 1) cnt1++;
            else cnt2++;
        }
        for(int i=0;i<cnt0;i++) arr[i] = 0;
        for(int i=cnt0;i<cnt0+cnt1;i++) arr[i] = 1;
        for(int i=cnt0+cnt1;i<cnt0+cnt1+cnt2;i++) arr[i] = 2;
    }
    
};



//Optimal solution - DUTCH INTERNATIONAL FLAG ALGORITHM
 // TC-O(N) 
 // SC - O(1)
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(arr[mid] == 0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            else if(arr[mid] == 1) mid++;
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
    
};