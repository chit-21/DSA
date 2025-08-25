// Given an array arr of positive integers, consider all binary trees such that:

// Each node has either 0 or 2 children;
// The values of arr correspond to the values of each leaf in an in-order traversal of the tree.
// The value of each non-leaf node is equal to the product of the largest leaf value in its left and right subtree, respectively.
// Among all possible binary trees considered, return the smallest possible sum of the values of each non-leaf node. It is guaranteed this sum fits into a 32-bit integer.

// A node is a leaf if and only if it has zero children.

//  class Solution {
// public:
//     int solve(vector<int>&arr,int i,vector<vector<int>> &dp,int j){
//         if(i==j)return 0;
//         if(dp[i][j]!=-1)return dp[i][j];
//         int sum=INT_MAX;
//         for(int k=i;k<j;k++){
//             int maxi=*max_element(arr.begin()+i,arr.begin()+k+1);
//             int maxi1=*max_element(arr.begin()+k+1,arr.begin()+j+1);
//             sum=min(sum,maxi*maxi1+solve(arr,i,dp,k)+solve(arr,k+1,dp,j));
//         }
//         return dp[i][j]=sum;
//     }
//     int mctFromLeafValues(vector<int>& arr) {
//         int n=arr.size();
//         vector<vector<int>> dp(n,vector<int>(n,-1));
//         return solve(arr,0,dp,n-1);
//     }
// };