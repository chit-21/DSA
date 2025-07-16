// We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].

// You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

// If you choose a job that ends at time X you will be able to start another job that starts at time X.



// code 

// class Solution {
// public:
    
//     int solve(vector<vector<int>> &jobs,int index,vector<int> &dp){
//         if(index>=jobs.size())return 0;
//         if(dp[index]!=-1)return dp[index];
//         int not_pick=solve(jobs,index+1,dp);
//         vector<int> v={jobs[index][1],0,0};
//         int next=upper_bound(jobs.begin(),jobs.end(),v)-jobs.begin();
//         int take=jobs[index][2]+solve(jobs,next,dp);
//         return dp[index]=max(take,not_pick);
//     }





//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
//         vector<vector<int>> jobs;

//         for(int i=0;i<startTime.size();i++){
//             jobs.push_back({startTime[i],endTime[i],profit[i]});
//         }

//         sort(jobs.begin(),jobs.end());
//         vector<int> dp(startTime.size(),-1);
//         return solve(jobs,0,dp);
        
//     }
// };