//GFG BRUTE - TC - O(NlogN)+O(N);
// SC = O(N);

// #include<set>
// int removeDuplicates(vector<int> &arr, int n) {
// 	// Write your code here.
// 	set<int>st;
// 	for(int i =0;i<n;i++){
// 		st.insert(arr[i]);
// 	}
// 	int ind = 0;
// 	for(auto it:st){
// 		arr[ind] = it;
// 		ind++;
// 	}
// 	return ind;
// }

// OPTIMAL TC = O(N);
//          SC = O(1);
class Solution{
public:
    int remove_duplicate(int arr[],int n){
        // code here
        int index = 0;
        for(int j =1;j<n;j++){
            if(arr[j]!=arr[index]){
                arr[index+1]=arr[j];
                index++;
            }
        }
        return index+1;
    }
};
