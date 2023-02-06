#include<bits/stdc++.h>
using namespace std;
#define N 9

class Solution 
{
    public:
    
       bool isValid(int grid[N][N],int row,int col, int ch){
        for(int i=0;i<9;i++){
            if(grid[row][i] == ch){
                return false;
            }
            if(grid[i][col] == ch){
                return false;
            }
            if(grid[3*(row/3)+(i/3)][3*(col/3)+i%3] == ch){
                return false;
            }
        }
        return true;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
            for(int i =0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j] == 0){
                    for(int ch = 1;ch<=9;ch++){
                        if(isValid(grid,i,j,ch)){
                            grid[i][j]=ch;
                            if(SolveSudoku(grid) == true){
                                return true;
                            }
                            else{
                                grid[i][j]=0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
         SolveSudoku(grid);
         for(int i=0;i<N;i++){
             for(int j=0;j<N;j++){
                 cout<<grid[i][j]<<" ";
             }
         }
    }
};


int main(){
  int t;
  cin>>t;
  while(t--){
    int grid[N][N];
    for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
        cin>>grid[i][j];
      }
    }
    Solution ob;
    if(ob.SolveSudoku(grid)==true){
      ob.printGrid(grid);
    }
    else{
      cout<<"No solution exists";
    }
    cout<<endl;
  }
  return 0;
}