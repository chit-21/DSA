// Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

// A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

// A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.

 


// class Solution {
// public:
//     int maxSubarraySumCircular(vector<int>& nums) {
//         int maxi=INT_MIN;
//         int sum=0,curr=0;

//         for(int i=0;i<nums.size();i++){
//             curr=max(nums[i],curr+nums[i]);
//             maxi=max(maxi,curr);
//         }
//         int total=accumulate(nums.begin(),nums.end(),0);

//         curr=0;
//         int mini=INT_MAX;
//         for(int i=0;i<nums.size();i++){
//             curr=min(nums[i],curr+nums[i]);
//             mini=min(mini,curr);
//         }
//         return (total==mini)?maxi:max(maxi,total-mini);
//     }
// };