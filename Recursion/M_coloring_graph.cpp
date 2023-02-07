#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    bool isPossible(int ind,int color[],bool graph[101][101],int n,int col){
        for(int k = 0;k<n;k++){
            if(k!=ind && graph[k][ind]==1 && color[k] == col){
                return false;
            }
        }
        return true;
    }
    bool solve(int ind,int color[],int m,int n,bool graph[101][101]){
        if(ind == n){
            return true;
        }
        
        for(int col = 1;col<=m;col++){
            if(isPossible(ind,color,graph,n,col)){
                color[ind] =col;
                if(solve(ind+1,color,m,n,graph)){
                    return true;
                }
                color[ind] = 0;
            }
        }
        return false;
    }
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int color[n] = {0};
        if(solve(0,color,m,n,graph) == true){
            return true;
        }
        return false;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}