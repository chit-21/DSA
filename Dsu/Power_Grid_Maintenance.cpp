// You are given an integer c representing c power stations, each with a unique identifier id from 1 to c (1‑based indexing).

// These stations are interconnected via n bidirectional cables, represented by a 2D array connections, where each element connections[i] = [ui, vi] indicates a connection between station ui and station vi. Stations that are directly or indirectly connected form a power grid.

// Initially, all stations are online (operational).

// You are also given a 2D array queries, where each query is one of the following two types:

// [1, x]: A maintenance check is requested for station x. If station x is online, it resolves the check by itself. If station x is offline, the check is resolved by the operational station with the smallest id in the same power grid as x. If no operational station exists in that grid, return -1.

// [2, x]: Station x goes offline (i.e., it becomes non-operational).

// Return an array of integers representing the results of each query of type [1, x] in the order they appear.

// Note: The power grid preserves its structure; an offline (non‑operational) node remains part of its grid and taking it offline does not alter connectivity.

 

// Example 1:

// Input: c = 5, connections = [[1,2],[2,3],[3,4],[4,5]], queries = [[1,3],[2,1],[1,1],[2,2],[1,2]]

// Output: [3,2,3]

// Explanation:



// Initially, all stations {1, 2, 3, 4, 5} are online and form a single power grid.
// Query [1,3]: Station 3 is online, so the maintenance check is resolved by station 3.
// Query [2,1]: Station 1 goes offline. The remaining online stations are {2, 3, 4, 5}.
// Query [1,1]: Station 1 is offline, so the check is resolved by the operational station with the smallest id among {2, 3, 4, 5}, which is station 2.
// Query [2,2]: Station 2 goes offline. The remaining online stations are {3, 4, 5}.
// Query [1,2]: Station 2 is offline, so the check is resolved by the operational station with the smallest id among {3, 4, 5}, which is station 3.




// we cant use adjacenecy list and use bfs for each query as it will lead to tle 
// rather we can apply path compression technique of disjoinset data structure




// code:
// class Solution {
// public:

// class DSU{
//     public:
//     int n;
//     vector<int> rank,parent;
//     DSU(int n){
//         this->n=n;
//         rank.resize(n+1,0);
//         parent.resize(n+1);
//         for(int i=1;i<=n;i++)parent[i]=i;
//     }
//     int find(int node){
//         if(node==parent[node])return node;
//         return parent[node]=find(parent[node]);
//     }
//     void Compression(int u,int v){
//         int a=find(u);
//         int b=find(v);
//         if(a==b)return ;
//         if(rank[a]<rank[b])parent[a]=b;
//         else if(rank[a]>rank[b])parent[b]=a;
//         else{
//             parent[a]=b;
//             rank[b]++;
//         }
//     }
// };



//     vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
//          DSU ds(c);

//          for(auto i:connections){
//             ds.Compression(i[0],i[1]);
//          }
//          unordered_map<int,set<int>> component;

//          for(int i=1;i<=c;i++){
//             int leader=ds.find(i);
//             component[leader].insert(i);
//          }
//          vector<int> online(c+1,1);
//          vector<int> ans;
//          for(auto i:queries){
//             int mode=i[0];
//             int node=i[1];

//             if(mode==2){
//                 online[node]=0;
//                 int root=ds.find(node);
//                 component[root].erase(node);
//             }
//             else if(mode==1){
//                 if(online[node])ans.push_back(node);
//                 else{
//                     int root=ds.find(node);
//                     if(component[root].empty())ans.push_back(-1);
//                    else ans.push_back(*component[root].begin());
//                 }

//             }
//          }
//          return ans;
//     }
// };
