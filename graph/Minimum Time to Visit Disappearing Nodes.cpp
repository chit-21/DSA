// There is an undirected graph of n nodes. You are given a 2D array edges, where edges[i] = [ui, vi, lengthi] describes an edge between node ui and node vi with a traversal time of lengthi units.

// Additionally, you are given an array disappear, where disappear[i] denotes the time when the node i disappears from the graph and you won't be able to visit it.

// Note that the graph might be disconnected and might contain multiple edges.

// Return the array answer, with answer[i] denoting the minimum units of time required to reach node i from node 0. If node i is unreachable from node 0 then answer[i] is -1.

//  class Solution {
// public:
//     vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
//         vector<int> dist(n, INT_MAX);  
//         unordered_map<int, list<pair<int, int>>> adj;
//         for (auto& edge : edges) {
//             adj[edge[0]].push_back({edge[1], edge[2]});
//             adj[edge[1]].push_back({edge[0], edge[2]});
//         }
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//         dist[0] = 0;  
//         pq.push({0, 0});  
        
//         while (!pq.empty()) {
//             auto top = pq.top();
//             pq.pop();

//             if (top.first > dist[top.second]) continue;
//             for(auto i:adj[top.second]){
//                 if(top.first+i.second<dist[i.first] && dist[top.second]+i.second<disappear[i.first]){
//                     dist[i.first]=dist[top.second]+i.second;
//                     pq.push({dist[i.first],i.first});
//                 }
//             }
//         }
//             for(int i=0;i<n;i++){
//                 if(dist[i]==INT_MAX){
//                     dist[i]=-1;
//                 }
//             }
        
//         return dist;
//     }
// };