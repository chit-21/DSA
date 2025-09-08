// In this problem, a rooted tree is a directed graph such that, there is exactly one node (the root) for which all other nodes are descendants of this node, plus every node has exactly one parent, except for the root node which has no parents.

// The given input is a directed graph that started as a rooted tree with n nodes (with distinct values from 1 to n), with one additional directed edge added. The added edge has two different vertices chosen from 1 to n, and was not an edge that already existed.

// The resulting graph is given as a 2D-array of edges. Each element of edges is a pair [ui, vi] that represents a directed edge connecting nodes ui and vi, where ui is a parent of child vi.

// Return an edge that can be removed so that the resulting graph is a rooted tree of n nodes. If there are multiple answers, return the answer that occurs last in the given 2D-array.


// class Solution {
// public:

//     void dfs(int node,vector<int> &visited,unordered_map<int,set<int>> &adj){
//         visited[node]=1;
//         for(auto i:adj[node]){
//             if(!visited[i]){
//                 dfs(i,visited,adj);
//             }
//         }
//     }




//     bool isRooted(unordered_map<int,set<int>> &adj,vector<int> &indegree){
//         int root=-1;
//         int n=indegree.size();

//         vector<int> visited(n,0);
//         for(int i=1;i<n;i++){
//             if(indegree[i]==0){
//                 root=i;
//                 break;
//             }
//         }
//         if(root==-1)return false;
//         dfs(root,visited,adj);
//         for(int i=1;i<n;i++){
//             if(!visited[i])return false;
//         }
//         return true;
//     }





//     vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
//         unordered_map<int,set<int>> adj;
//         int n=edges.size();
//         vector<int> indegree(n+1,0);
//         for(auto i:edges){
//             adj[i[0]].insert(i[1]);
//             indegree[i[1]]++;
//         }
//         vector<int> ans;
//         for(auto i:edges){
//             adj[i[0]].erase(i[1]);
//             indegree[i[1]]--;
//             if(isRooted(adj,indegree)){
//                 ans={i[0],i[1]};
//             }
//             adj[i[0]].insert(i[1]);
//             indegree[i[1]]++;
//         }
//         return ans;
//     }
// };