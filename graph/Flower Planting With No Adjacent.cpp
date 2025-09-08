// You have n gardens, labeled from 1 to n, and an array paths where paths[i] = [xi, yi] describes a bidirectional path between garden xi to garden yi. In each garden, you want to plant one of 4 types of flowers.

// All gardens have at most 3 paths coming into or leaving it.

// Your task is to choose a flower type for each garden such that, for any two gardens connected by a path, they have different types of flowers.

// Return any such a choice as an array answer, where answer[i] is the type of flower planted in the (i+1)th garden. The flower types are denoted 1, 2, 3, or 4. It is guaranteed an answer exists.


//  bool isPossible(unordered_map<int,list<int>> &adj,int node,vector<int> &color,int c){
//         for(auto i:adj[node]){
//             if(color[i]!=0 && color[i]==c)return false;
//         }
//         return true;
//     }

//     void dfs(vector<int> &color,unordered_map<int,list<int>> &adj,int node,int n){
//        for(int i=1;i<=4;i++){
//         if(isPossible(adj,node,color,i) && !color[node]){
//             color[node]=i;
//             for(auto j:adj[node]){
//                 if(!color[j])dfs(color,adj,j,n);
//             }   
//         }
//        }
//     }

//     vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        
//         vector<int> color(n+1,0);
//         unordered_map<int,list<int>> adj(n);
//         for(auto i:paths){
//             adj[i[0]].push_back(i[1]);
//             adj[i[1]].push_back(i[0]);
//         }
//         for(int i=1;i<=n;i++){
//             dfs(color,adj,i,n);
//         }
//            vector<int> ans;
//            for(int i=1;i<color.size();i++)ans.push_back(color[i]);
//         return ans;
//     }
// };