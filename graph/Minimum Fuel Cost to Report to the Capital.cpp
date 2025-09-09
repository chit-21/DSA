// There is a tree (i.e., a connected, undirected graph with no cycles) structure country network consisting of n cities numbered from 0 to n - 1 and exactly n - 1 roads. The capital city is city 0. You are given a 2D integer array roads where roads[i] = [ai, bi] denotes that there exists a bidirectional road connecting cities ai and bi.

// There is a meeting for the representatives of each city. The meeting is in the capital city.

// There is a car in each city. You are given an integer seats that indicates the number of seats in each car.

// A representative can use the car in their city to travel or change the car and ride with another representative. The cost of traveling between two cities is one liter of fuel.

// Return the minimum number of liters of fuel to reach the capital city.

//  class Solution {
// public:

//     long long ans=0;
//     int dfs(unordered_map<int,list<int>> &adj,int seats,int parent,int node){

//         long long people=1;
//         for(auto i:adj[node]){
//             if(i!=parent){
//                 people+=dfs(adj,seats,node,i);
//             }
//         }
//         long long car=people/seats;
//         if(people%seats)car++;
//         if(node!=0)ans+=car;
//         return people;
//     }




//     long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
//         unordered_map<int,list<int>> adj;
//         for(auto i:roads){
//             adj[i[0]].push_back(i[1]);
//             adj[i[1]].push_back(i[0]);
//         }
//         dfs(adj,seats,-1,0);
//         return ans;
//     }
// };