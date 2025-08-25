// You are given an array of integers nums (0-indexed) and an integer k.

// The score of a subarray (i, j) is defined as min(nums[i], nums[i+1], ..., nums[j]) * (j - i + 1). A good subarray is a subarray where i <= k <= j.

// Return the maximum possible score of a good subarray.



// class Solution {
// public:
// vector<int>findNSE(vector<int>&nums){
//     int n=nums.size();
//     vector<int>res(n) ;
//     stack<int>st;
//     for(int i=n-1;i>=0;i--) {
//         while(!st.empty()&&nums[st.top()]>=nums[i])st.pop();
//         res[i]=st.empty()?n:st.top();
//         st.push(i);
//     }
//     return res;
// }
// vector<int>findPSE(vector<int>&nums){
//     int n=nums.size();
//     vector<int>res(n) ;
//     stack<int>st;
//     for(int i=0;i<n;i++) {
//         while(!st.empty()&&nums[st.top()]>=nums[i])st.pop();
//         res[i]=st.empty()?-1:st.top();
//         st.push(i);
//     }
//     return res;
// }
//     int maximumScore(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int>nse=findNSE(nums);
//         vector<int>pse=findPSE(nums);

//         int ans=0;
//         for(int i=0;i<n;i++){
//            int l=pse[i]+1;
//            int r=nse[i]-1;
//             if(l<=k && k<=r){
//                 ans=max(ans,nums[i]*(r-l+1));
//             }
//         }
//         return ans;
//     }
// };

 