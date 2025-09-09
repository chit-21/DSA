// You are given an integer n. There is an undirected graph with n nodes, numbered from 0 to n - 1. You are given a 2D integer array edges where edges[i] = [ai, bi] denotes that there exists an undirected edge connecting nodes ai and bi.

// Return the number of pairs of different nodes that are unreachable from each other.

//  class Solution {
// public:
//     class DSU{
//         public:
//         vector<int> parent,size;
//         DSU(int n){
//             parent.resize(n);
//             size.resize(n,1);
//             for(int i=0;i<n;i++)parent[i]=i;
//         }

//         int find(int node){
//             if(node==parent[node])return node;
//             return parent[node]=find(parent[node]);
//         }
//         void unite(int a,int b){
//             int u=find(a);
//             int v=find(b);
//             if(u==v)return;
//             if(size[u]<size[v]){
//                 parent[u]=v;
//                 size[v]+=size[u];
//             }
//             else{
//                 parent[v]=u;
//                 size[u]+=size[v];
//             }
//         }
//     };
//     long long countPairs(int n, vector<vector<int>>& edges) {
//         DSU ds(n);

//     for(auto i:edges){
//         if(ds.find(i[0])!=ds.find(i[1]))ds.unite(i[0],i[1]);
//     }
//     set<int> seen;
//      long long ans=0;
//      int total=n;
//      for(int i=0;i<n;i++){
//         if(seen.find(ds.find(i))==seen.end())
//         ans+=((long long )ds.size[ds.find(i)]*(long long )(total-ds.size[ds.find(i)]));
//         seen.insert(ds.find(i));
//      }
//      return ans/2;

//     }
// };