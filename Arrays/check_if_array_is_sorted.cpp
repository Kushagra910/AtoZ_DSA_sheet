// GFG problem Check if array is sorted
// Time Complexity = O(N);
// Space Complexity = O(1);
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i = 1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                continue;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};