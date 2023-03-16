// gfg solution
// TC = O(2N);
// SC = O(1);

int missingNumber(int A[], int N)
{
    // Your code goes here
    vector<int>hash(N+1,0);
    for(int i=0;i<N-1;i++){
        hash[A[i]] = 1;
    }
    int ans = 0;
    for(int i=1;i<=N;i++){
        if(hash[i] == 0){
            ans = i;
            break;
        }
    }
    return ans;
}

// Optimal CODESTUDIO
// TC = O(N)
// SC = O(1)

int missingNumber(vector<int>&A, int N) {
    // Write your code here.
    int xor1 = 0;
    int xor2 = 0;
    int n = N-1;
    for(int i=0;i<n;i++){
        xor1 = xor1^(i+1);
        xor2 = xor2 ^ A[i];
    }
    xor1 = xor1^N;
    return xor1 ^ xor2;

}