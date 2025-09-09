// There is a dungeon with n x m rooms arranged as a grid.

// You are given a 2D array moveTime of size n x m, where moveTime[i][j] represents the minimum time in seconds after which the room opens and can be moved to. You start from the room (0, 0) at time t = 0 and can move to an adjacent room. Moving between adjacent rooms takes exactly one second.

// Return the minimum time to reach the room (n - 1, m - 1).

// Two rooms are adjacent if they share a common wall, either horizontally or vertically.


// class Solution {
// public:
//     int minTimeToReach(vector<vector<int>>& moveTime) {
//         int n=moveTime.size();
//         int m=moveTime[0].size();
//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
//         vector<pair<int,int>> dir={{-1,0},{0,1},{1,0},{0,-1}};
//         vector<vector<int>> dist(n,vector<int>(m,INT_MAX));
       
//         pq.push({0,{0,0}});
//         dist[0][0]=0;
//         while(!pq.empty()){
//             auto t=pq.top();
//             pq.pop();
//             int d=t.first;
//             int i=t.second.first;
//             int j=t.second.second;
//             if(i==n-1 && j==m-1)return d;
//             if(d>dist[i][j])continue;
//             for(int k=0;k<4;k++){
//                 int nr=i+dir[k].first;
//                 int nc=j+dir[k].second;
//                 if(nc>=0 && nr>=0 && nc<m && nr<n){
//                     if(1+max(d,moveTime[nr][nc])<dist[nr][nc]){
//                         dist[nr][nc]=max(d,moveTime[nr][nc])+1;
//                         pq.push({dist[nr][nc],{nr,nc}});
//                     }
//                 }
//             }
//         }
//         return -1;
//     }
// };