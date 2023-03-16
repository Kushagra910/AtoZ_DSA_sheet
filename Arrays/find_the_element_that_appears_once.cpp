// gfg solution
// Brute force TC-O(n^2);

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int ans = 0;
	    for(int i=0;i<N;i++){
	        int num = A[i];
	        int cnt = 0;
	        for(int j=0;j<N;j++){
	            if(A[j] == num){
	                cnt++;
	            }
	        }
	        if(cnt == 1) ans = num;
	    }
	    return ans;
	}
};

// Better approach = Hashing 
// but hash using array will not work as array values are to large 
// TC -> O(3*N)
// SC => O(maxi)

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int maxi = A[0];
	    for(int i=0;i<N;i++){
	        maxi = max(maxi,A[i]);
	    }
	    int hash[maxi+1] = {0};
	    for(int i=0;i<N;i++){
	        hash[A[i]]++;
	    }
	    long long ans = 0;
	    for(int i=0;i<N;i++){
	        if(hash[A[i]] == 1){
	            ans = A[i];
	            break;
	        }
	    }
	    return ans;
	}
};

// So we use map Data structure
// TC = O(N);(best case) because we have used unordered map
// SC =(1);
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    unordered_map<int,int>mpp;
	    for(int i=0;i<N;i++){
	        mpp[A[i]]++;
	    }
	    int ans = 0;
	    for(auto it:mpp){
	        if(it.second == 1){
	            ans = it.first;
	        }
	    }
	    return ans;
	}
};

// Optimal Xor property
// TC = O(N);
// SC = O(1);

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int xor1 = 0;
	    for(int i=0;i<N;i++){
	        xor1 = xor1 ^ A[i];
	    }
	    return xor1;
	}
};