// There is a party where n friends numbered from 0 to n - 1 are attending. There is an infinite number of chairs in this party that are numbered from 0 to infinity. When a friend arrives at the party, they sit on the unoccupied chair with the smallest number.

// For example, if chairs 0, 1, and 5 are occupied when a friend comes, they will sit on chair number 2.
// When a friend leaves the party, their chair becomes unoccupied at the moment they leave. If another friend arrives at that same moment, they can sit in that chair.

// You are given a 0-indexed 2D integer array times where times[i] = [arrivali, leavingi], indicating the arrival and leaving times of the ith friend respectively, and an integer targetFriend. All arrival times are distinct.

// Return the chair number that the friend numbered targetFriend will sit on.




// int smallestChair(vector<vector<int>>& times, int targetFriend) {
//         int n=times.size();
//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//             ans.push_back({times[i][0],times[i][1],i});
//         }
//         priority_queue<int,vector<int>,greater<int>> chair;
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> dept;
//         map<int,int> mp;
//         for(int i=0;i<n;i++)chair.push(i);
//         sort(ans.begin(), ans.end());
//         for(int i=0;i<n;i++){
//             while(!dept.empty() && ans[i][0]>=dept.top().first){
//                 int ch=dept.top().second;
//                 chair.push(ch);
//                 dept.pop();
//             }
//             int c=chair.top();
//             chair.pop();
//             mp[ans[i][2]]=c;
//             dept.push({ans[i][1],c});
//             if(ans[i][2]==targetFriend)return c;
//         }
//         return -1;

//     }


// Time Complexity: O(n log n)

// Space Complexity: O(n)