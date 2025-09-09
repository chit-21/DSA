// You are given an undirected connected graph with n nodes labeled from 0 to n - 1 and a 2D integer array edges where edges[i] = [ui, vi, wi] denotes an undirected edge between node ui and node vi with weight wi, and an integer k.

// You are allowed to remove any number of edges from the graph such that the resulting graph has at most k connected components.

// The cost of a component is defined as the maximum edge weight in that component. If a component has no edges, its cost is 0.

// Return the minimum possible value of the maximum cost among all components after such removals.


// class Solution {
// public:
//      class DSU{
//         public:
//         int n;
//         vector<int> rank;
//         vector<int> parent;
//         int components;
        
//         DSU( int n){
//             this->n=n;
//             parent.resize(n,0);
//             for(int i=0;i<n;i++)parent[i]=i;
//             rank.resize(n);
//             components=n;
//         }
        
//         int find( int node){
//             if(node==parent[node])return parent[node];
//             return find(parent[node]);
//         }
        
//         void Compression(int u,int v){
//             int a=find(u);
//             int b=find(v);
//              if(a==b)return;
//              if(rank[a]>rank[b]){
//                  parent[b]=a;
//              }
//              else if(rank[b]>rank[a]){
//                  parent[a]=b;
//              }
//              else {
//                  parent[a]=b;
//                  rank[b]++;
//              }
//              components--;
//         }
        
//     };

//     bool isValid(vector<vector<int>> &edges,int k,int mid,int n){
//         DSU ds(n);

//         for(auto i:edges){
//             if(i[2]<=mid){
//                 ds.Compression(i[0],i[1]);
//             }
//         }
//         return ds.components<=k;
//     }







//     int minCost(int n, vector<vector<int>>& edges, int k) {
//         int low=0;
//         int high=0;
//         for(auto i:edges){
//             high=max(high,i[2]);
//         }
//         int ans=-1;
//         // unordered_map<int,list<pair<int,int>>> adj;
//         // for(auto i:edges){
//         //     adj[i[0]].push_back({i[1],i[2]});
//         //     adj[i[1]].push_back({i[0],i[2]});
//         // }
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(isValid(edges,k,mid,n)){
//                 ans=mid;
//                 high=mid-1;
//             }
//             else low=mid+1;
//         }
//         return ans;
//     }
// };