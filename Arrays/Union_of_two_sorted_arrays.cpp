// CodeStudio Union of two sorted arrays
// Optimised solution - TC - O(n+m);
// SC = O(n+m)-> taken just to store the elements not for solving

vector < int > sortedArray(vector < int > arr1, vector < int > arr2) {
    // Write your code here
        int i = 0;
        int j = 0;
        int n = arr1.size();
        int m = arr2.size();
        vector<int>temp;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(temp.size() == 0 || temp.back() != arr1[i]){
                    temp.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(temp.size() == 0 ||temp.back()!= arr2[j]){
                    temp.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(i<n){
                if(temp.size() == 0 ||temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m){
            if(temp.size() == 0 ||temp.back()!= arr2[j]){
                temp.push_back(arr2[j]);
            }           
             j++;
        }
        return temp;
}