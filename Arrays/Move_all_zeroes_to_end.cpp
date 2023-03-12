
// Gfg solution 
// TC = O(N);
// SC = O(1);
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int j = -1;
	    for(int i=0;i<n;i++){
	        if(arr[i] == 0){
	            j = i;
	            break;
	        }
	    }
	    if(j == -1) return ;
	    for(int i=j+1;i<n;i++){
	        if(arr[i]!=0){
	            swap(arr[i],arr[j]);
	            j++;
	        }
	    }
	}
};