// Given an integer array nums and an integer k, return true if it is possible to divide this array into k non-empty subsets whose sums are all equal.
// Example 1:

// Input: nums = [4,3,2,3,5,2,1], k = 4
// Output: true
// Explanation: It is possible to divide it into 4 subsets (5), (1, 4), (2,3), (2,3) with equal sums.

// we can make count array for each subset but it will take k to the power n complexity 
// therefore it can be done in 2^n bu itraversing whole array by taking and not taking mentality



// code



//     int solve(int index,int k, vector<int> &nums,vector<int> &visited,int target,int curr){
//         // if(index>=nums.size())return false;
//         if(k==0)return true;
//         if(curr>target)return false;
//         if(curr==target)return solve(0,k-1,nums,visited,target,0);

//         for(int i=index;i<nums.size();i++){
//             if(!visited[i]){
//                 visited[i]=1;
//                 if(solve(i+1,k,nums,visited,target,curr+nums[i]))return true;
//                 visited[i]=0;
//             }
//         }
//         return false;
//     }
//     bool canPartitionKSubsets(vector<int>& nums, int k) {
//         vector<int> visited(nums.size(),0);
//         int sum=accumulate(nums.begin(),nums.end(),0);
//         if(sum%k!=0)return false;
//         sum/=k;
//         sort(nums.rbegin(),nums.rend());
//         if (nums[0] > sum) return false;
//         return solve(0,k,nums,visited,sum,0);

//     }
// };