// You are given an integer n and an undirected graph with n nodes labeled from 0 to n - 1. This is represented by a 2D array edges, where edges[i] = [ui, vi, timei] indicates an undirected edge between nodes ui and vi that can be removed at timei.

// You are also given an integer k.

// Initially, the graph may be connected or disconnected. Your task is to find the minimum time t such that after removing all edges with time <= t, the graph contains at least k connected components.

// Return the minimum time t.

// A connected component is a subgraph of a graph in which there exists a path between any two vertices, and no vertex of the subgraph shares an edge with a vertex outside of the subgraph.

 

// Example 1:

// Input: n = 2, edges = [[0,1,3]], k = 2

// Output: 3

// Explanation:



// Initially, there is one connected component {0, 1}.
// At time = 1 or 2, the graph remains unchanged.
// At time = 3, edge [0, 1] is removed, resulting in k = 2 connected components {0}, {1}. Thus, the answer is 3.
// Example 2:

// Input: n = 3, edges = [[0,1,2],[1,2,4]], k = 3

// Output: 4

// Explanation:



// Initially, there is one connected component {0, 1, 2}.
// At time = 2, edge [0, 1] is removed, resulting in two connected components {0}, {1, 2}.
// At time = 4, edge [1, 2] is removed, resulting in k = 3 connected components {0}, {1}, {2}. Thus, the answer is 4.





// typically a standard binary search solution approach whee we will minimise time




// code:
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