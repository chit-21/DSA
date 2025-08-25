// You are given an m x n matrix mat that has its rows sorted in non-decreasing order and an integer k.

// You are allowed to choose exactly one element from each row to form an array.

// Return the kth smallest array sum among all possible arrays.



// class Solution {
// public:
    
//     long long int solve(int mid,vector<vector<int>> &mat,int k,int index ,vector<vector<int>> &dp){
//         if(mid<0)return 0;
//         if(index==mat.size())return 1;
//         if(dp[index][mid]!=-1)return dp[index][mid];
//         long long int count=0;
        
//         for(int i=0;i<mat[0].size();i++){
//             count+=solve(mid-mat[index][i],mat,k,index+1,dp);
//             if(count>k){
//                 count=k;
//                 break;
//             }
//         }
//         return dp[index][mid]=count;
//     }
//      bool isValid(int mid,vector<vector<int>> &mat,int k,vector<vector<int>> &dp){
//         int i=0;
//         return solve(mid,mat,k,i,dp)>=k;
//      }
//     int kthSmallest(vector<vector<int>>& mat, int k) {
//         int n=mat.size(),m=mat[0].size();
//         int low=0,high=0;
//         for(int i=0;i<n;i++){
//             low+=mat[i][0];
//             high+=mat[i][m-1];
//         }
//         int ans=-1;
//         vector<vector<int>> dp(n+1,vector<int>(5000*n+1,-1));
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(isValid(mid,mat,k,dp)){
//                 ans=mid;
//                 high=mid-1;
//             }
//             else low=mid+1;
//         }
//         return ans;
//     }
// };

// Time:
// O(n⋅m⋅(5000⋅n))=O(5000⋅n2⋅m)

// space:
// O(n⋅(5000⋅n))=O(5000⋅n2)