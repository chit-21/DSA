// A tree is an undirected graph in which any two vertices are connected by exactly one path. In other words, any connected graph without simple cycles is a tree.

// Given a tree of n nodes labelled from 0 to n - 1, and an array of n - 1 edges where edges[i] = [ai, bi] indicates that there is an undirected edge between the two nodes ai and bi in the tree, you can choose any node of the tree as the root. When you select a node x as the root, the result tree has height h. Among all possible rooted trees, those with minimum height (i.e. min(h))  are called minimum height trees (MHTs).

// Return a list of all MHTs' root labels. You can return the answer in any order.

// The height of a rooted tree is the number of edges on the longest downward path between the root and a leaf.



// class Solution {
// public:
//     vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
//         vector<int> ans;
//         queue<int> q;
//         if(n==1)return {0};
//         vector<int> indegree(n,0);
//         unordered_map<int,list<int>> adj;
//         for(auto i:edges){
//             adj[i[0]].push_back(i[1]);
//             adj[i[1]].push_back(i[0]);
//             indegree[i[0]]++;
//             indegree[i[1]]++;
//         }


//         for(int i=0;i<n;i++){
//             if(indegree[i]==1){
//                 q.push(i);
//                 indegree[i]--;
//             }
//         }
//         while(!q.empty()){
//             int sz=q.size();
//             vector<int> temp;

//             while(sz--){
//                 auto top=q.front();
//                 q.pop();
//                 temp.push_back(top);
//                 for(auto i:adj[top]){
//                     indegree[i]--;
//                     if(indegree[i]==1){
//                         q.push(i);
//                     }
//                 }
//             }
//             ans=temp;
//         }
//         return ans;
//     }
// };