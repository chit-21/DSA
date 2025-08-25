// You are given a 2D matrix of size m x n, consisting of non-negative integers. You are also given an integer k.

// The value of coordinate (a, b) of the matrix is the XOR of all matrix[i][j] where 0 <= i <= a < m and 0 <= j <= b < n (0-indexed).

// Find the kth largest value (1-indexed) of all the coordinates of matrix.




// class Solution {
// public:
//     int kthLargestValue(vector<vector<int>>& matrix, int k) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         vector<vector<int>> xorMatrix(n,vector<int>(m,0));
//         xorMatrix[0][0]=matrix[0][0];
//         for(int i=1;i<n;i++){
//             xorMatrix[i][0] = (xorMatrix[i-1][0]^matrix[i][0]);
//         }
//         for(int i=1;i<m;i++){
//             xorMatrix[0][i] = (xorMatrix[0][i-1]^matrix[0][i]);
//         }
//         for(int i=1;i<n;i++){
//             for(int j=1;j<m;j++){
//                 xorMatrix[i][j] = (xorMatrix[i-1][j]^xorMatrix[i][j-1]^xorMatrix[i-1][j-1]^matrix[i][j]);
//             }
//         }

//         priority_queue<int,vector<int>,greater<int>> pq;

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 pq.push(xorMatrix[i][j]);
//                 if(pq.size()>k){
//                     pq.pop();
//                 }
//             }
//         }

//         return pq.top();
//     }
// };

// O(n⋅m⋅logk)