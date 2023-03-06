// codestudio solution of NINJa and the second order elements
// TimeComplexity = O(N); optimised
int secondSmallest(vector<int>&arr,int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int secondLargest(vector<int>&arr,int n){
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = secondLargest(a,n);
    int ssmallest = secondSmallest(a,n);
    return {slargest,ssmallest};
}
