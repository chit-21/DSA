// You are in a city that consists of n intersections numbered from 0 to n - 1 with bi-directional roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road between any two intersections.

// You are given an integer n and a 2D integer array roads where roads[i] = [ui, vi, timei] means that there is a road between intersections ui and vi that takes timei minutes to travel. You want to know in how many ways you can travel from intersection 0 to intersection n - 1 in the shortest amount of time.

// Return the number of ways you can arrive at your destination in the shortest amount of time. Since the answer may be large, return it modulo 109 + 7.

//  class Solution {
// public:
// int mod=1e9+7;
//     int countPaths(int n, vector<vector<int>>& roads) {
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
//         vector<int> count(n,0);
//         vector<int> time(n,INT_MAX);
//         unordered_map<int,list<pair<int,int>>> adj;

//         for(auto i:roads){
//             adj[i[0]].push_back({i[1],i[2]});
//             adj[i[1]].push_back({i[0],i[2]});
//         }
//         q.push({0,0});
//         time[0]=0;
//         count[0]=1;
//         while(!q.empty()){
//             auto top=q.top();
//             q.pop();

//             for(auto i:adj[top.second]){
//                 if(time[top.second]+i.second<time[i.first]){
//                   time[i.first]=i.second+top.first;
//                   count[i.first]=count[top.second];
//                   q.push({time[i.first],i.first});
//                 }
//                 else if(top.first+i.second==time[i.first]){
//                     count[i.first]=(count[i.first]+count[top.second])%mod;
//                 }
//             }


//         }
//         return count[n-1];

//     }
// };