// An undirected graph of n nodes is defined by edgeList, where edgeList[i] = [ui, vi, disi] denotes an edge between nodes ui and vi with distance disi. Note that there may be multiple edges between two nodes.

// Given an array queries, where queries[j] = [pj, qj, limitj], your task is to determine for each queries[j] whether there is a path between pj and qj such that each edge on the path has a distance strictly less than limitj .

// Return a boolean array answer, where answer.length == queries.length and the jth value of answer is true if there is a path for queries[j] is true, and false otherwise.


// class Solution {
// public:

//     class DSU{
//         public:
//         vector<int> parent,rank;
//         DSU(int n){
//             parent.resize(n);
//             rank.resize(n,0);
//             for(int i=0;i<n;i++)parent[i]=i;
//         }

//         int find(int node){
//             if(node==parent[node])return node;
//             return parent[node]=find(parent[node]);
//         }

//         void unite(int a,int b){
//             int u=find(a);
//             int v=find(b);
//             if(u==v)return ;
//             if(rank[u]<rank[v]){
//                     parent[u]=v;
//             }
//             else if(rank[u]>rank[v]){
//                     parent[v]=u;
//             }else{
//                 parent[u]=v;
//                 rank[v]++;
//             }
//         }
       

//     };


//     vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
//         DSU ds(n);
//         sort(edges.begin(), edges.end(), [](auto &a, auto &b){
//             return a[2] < b[2];
//         });

     
//         vector<vector<int>> q;
//         for (int i = 0; i < queries.size(); i++) {
//             q.push_back({queries[i][0], queries[i][1], queries[i][2], i});
//         }

//         sort(q.begin(), q.end(), [](auto &a, auto &b){
//             return a[2] < b[2];
//         });
//         vector<bool> ans(queries.size());
//         int e = 0;

//         for (auto &qr : q) {
//             int u = qr[0], v = qr[1], limit = qr[2], idx = qr[3];
//             while (e < edges.size() && edges[e][2] < limit) {
//                 ds.unite(edges[e][0], edges[e][1]);
//                 e++;
//             }
//             ans[idx] = (ds.find(u) == ds.find(v));
//         }

//         return ans;
//     }
// };