// Brute TC-O(n^2)
// SC - O(1);

// gfg -> TLE
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        for(int i = 0;i<size;i++){
            int el = a[i];
            int cnt = 0;
            for(int j =0;j<size;j++){
                if(a[j] == el){
                    cnt ++;
                }
            }
            if(cnt>size/2) return a[i];
        }
        return -1;
    }
};

// Optimal 
// TC -O(N)+O(N)
// SC- O(1)

//CodeStudio
int majorityElement(vector<int> v) {
	// Write your code here
	int el;
	int cnt = 0;
	for(int i=0;i<v.size();i++){
		if(cnt == 0){
			el = v[i];
			cnt = 1;
		}
		else if(v[i] == el){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	int cnt1 = 0;
	for(int i=0;i<v.size();i++){
		if(v[i] == el){
			cnt1++;
		}
	}
	if(cnt1>(v.size()/2)) return el;
	return -1;
}


