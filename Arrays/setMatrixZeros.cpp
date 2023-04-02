// better approach 
// TC => O(nxm);
// SC => O(n+m);
// CODE STUDIO SOLUTION

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int col[m] = {0};
	int row[n] = {0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				col[j] = 1;
				row[i] = 1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(col[j] || row[i]){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}

// OPtimal approach
// TC => O(2xnxm);
// SC => O(1);
// LEETCODE solution

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n = matrix.size();
       int m = matrix[0].size();
       int col0 = 1;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(matrix[i][j] == 0){
                matrix[i][0] = 0;
               if(j!=0)  matrix[0][j] = 0;
               else col0 = 0;
               }
           }
       } 
       for(int i=1;i<n;i++){
           for(int j=1;j<m;j++){
               if(matrix[i][j]!=0){
                   if(matrix[i][0] == 0 || matrix[0][j] == 0){
                       matrix[i][j] = 0;
                   }
               }
           }
       }
       if(matrix[0][0] == 0){
           for(int j=0;j<m;j++) matrix[0][j] = 0;
       }
       if(col0 == 0){
           for(int i=0;i<n;i++) matrix[i][0] = 0;
       }
    }
};