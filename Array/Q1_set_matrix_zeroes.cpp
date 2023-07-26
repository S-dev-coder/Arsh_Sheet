// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.

 // Example 1:
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Example 2:
// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//      // Brute Force Approach
//     void setrow(vector<vector<int>>& matrix,int n, int m,int i){
   
//         for(int j=0;j<m;j++){
//         if(matrix[i][j]!=0)
//             matrix[i][j]=-1;
//     }
//     }
//      void setcol(vector<vector<int>>& matrix,int n, int m,int j){
       
//         for(int i=0;i<n;i++){
//         if(matrix[i][j]!=0)
//             matrix[i][j]=-1;
//     }
    
//      }
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n= matrix.size();
//         int m= matrix[0].size();
        
//         for(int i=0;i<n;i++){
//              for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                  setrow(matrix,n,m,i);
//                  setcol(matrix,n,m,j);
//             }
               
//         }
//         }
        
        
//         for(int i=0;i<n;i++){ 
//         for(int j=0;j<m;j++){
       
//         if(matrix[i][j]==-1)
//             matrix[i][j]=0;
//     }
//         }
        
//     }
    
    
//     // Optimal Approach
    
//      void setZeroes(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();
        
//         vector<bool> rowToModify(n, false);
//         vector<bool> colToModify(m, false);
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (matrix[i][j] == 0) {
//                     rowToModify[i] = true;
//                     colToModify[j] = true;
//                 }
//             }
//         }
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (rowToModify[i] || colToModify[j]) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
    
    
    
    
// };

