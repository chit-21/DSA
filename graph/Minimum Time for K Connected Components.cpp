// You are given an integer n and an undirected graph with n nodes labeled from 0 to n - 1. This is represented by a 2D array edges, where edges[i] = [ui, vi, timei] indicates an undirected edge between nodes ui and vi that can be removed at timei.

// You are also given an integer k.

// Initially, the graph may be connected or disconnected. Your task is to find the minimum time t such that after removing all edges with time <= t, the graph contains at least k connected components.

// Return the minimum time t.

// A connected component is a subgraph of a graph in which there exists a path between any two vertices, and no vertex of the subgraph shares an edge with a vertex outside of the subgraph.


// class Solution {
// public:
//    class DSU{
//         public:
//         int n;
//         vector<int> rank,parent;
//         int components;

//         DSU(int n){
//             parent.resize(n);
//             rank.resize(n,0);
//             for(int i=0;i<n;i++)parent[i]=i;
//             components=n;
//         }
//         int find(int x){
//             while (x != parent[x]) {
//             parent[x] = parent[parent[x]];  // path compression
//             x = parent[x];
//         }
//         return x;
//         }
//         void Compression(int a,int b){
//             int u=find(a);
//             int v=find(b);
//             if(u==v)return;
//             if(rank[u]<rank[v])parent[u]=v;
//             else if(rank[u]>rank[v])parent[v]=u;
//             else{
//                 parent[u]=v;
//                 rank[v]++;
//             }
//             components--;
//         }
//     };


//     bool isValid(int mid,int n,vector<vector<int>>& edges,int k){
//         DSU ds(n);
//         for(auto i:edges){
//             if(i[2]>mid)ds.Compression(i[0],i[1]);
//         }
//          return ds.components>=k;
//     }
//     int minTime(int n, vector<vector<int>>& edges, int k) {
//         int low=0;
//         int high=0;
//         if(edges.empty())return 0;
//         for(auto i:edges)high=max(high,i[2]);
//         int ans=-1;

//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(isValid(mid,n,edges,k)){
//                 ans=mid;
//                 high=mid-1;
//             }
//             else low=mid+1;
//         }
//         return ans;
//     }   
    
// };