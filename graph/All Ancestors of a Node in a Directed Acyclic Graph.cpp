// You are given a positive integer n representing the number of nodes of a Directed Acyclic Graph (DAG). The nodes are numbered from 0 to n - 1 (inclusive).

// You are also given a 2D integer array edges, where edges[i] = [fromi, toi] denotes that there is a unidirectional edge from fromi to toi in the graph.

// Return a list answer, where answer[i] is the list of ancestors of the ith node, sorted in ascending order.

// A node u is an ancestor of another node v if u can reach v via a set of edges.


// vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//         vector<vector<int>> res(n);
//         vector<vector<int>> graph(n);
        
//         for (const auto& edge : edges) {
//             graph[edge[0]].push_back(edge[1]);
//         }
        
//         for (int i = 0; i < n; ++i) {
//             vector<bool> visit(n, false);
//             dfs(graph, i, i, res, visit);
//         }
        
//         for (int i = 0; i < n; ++i) {
//             sort(res[i].begin(), res[i].end());
//         }
        
//         return res;
//     }

// private:
//     void dfs(vector<vector<int>>& graph, int parent, int curr, vector<vector<int>>& res, vector<bool>& visit) {
//         visit[curr] = true;
//         for (int dest : graph[curr]) {
//             if (!visit[dest]) {
//                 res[dest].push_back(parent);
//                 dfs(graph, parent, dest, res, visit);
//             }
//         }
//     }
// };

