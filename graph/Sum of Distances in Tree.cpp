// There is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.

// You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

// Return an array answer of length n where answer[i] is the sum of the distances between the ith node in the tree and all other nodes.

//  class Solution {
// public:
// vector<int> res,count;
// unordered_map<int,list<int>> adj;

//     void dfs1(int node,int parent){
//         for(auto i:adj[node]){
//             if(i!=parent){
//                 dfs1(i,node);
//                 count[node]+=count[i];
//                 res[node]+=res[i]+count[i];
//             }
//         }
//     }
//     void dfs2(int node,int parent){
//         for(auto i:adj[node]){
//             if(i!=parent){
//                 res[i]=res[node]-count[i]+count.size()-count[i];
//                 dfs2(i,node);
//             }
//         }
//     }




//     vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
//         adj.clear();
//         res.resize(n,0);
//         count.resize(n,1);
        
//         for(auto i:edges){
//             adj[i[0]].push_back(i[1]);
//             adj[i[1]].push_back(i[0]);
//         }
//         dfs1(0,-1);
//         dfs2(0,-1);
//         return res;
//     }
// };