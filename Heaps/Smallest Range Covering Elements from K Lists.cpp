// class Solution {
// public:
//     vector<int> smallestRange(vector<vector<int>>& nums) {
//         priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
// int maxnum=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             pq.push({nums[i][0],i,0});
//             maxnum=max(maxnum,nums[i][0]);
//         }

//         int mini=0,maxi=INT_MAX;

//         while(!pq.empty()){

//             auto top=pq.top();
//             int num=top[0],index=top[1],ele=top[2];
//             pq.pop();

//             if(maxi-mini> maxnum-num){
//                 maxi=maxnum;
//                 mini=num;
//             }
//             if(ele+1<nums[index].size()){
//                 pq.push({nums[index][ele+1],index,ele+1});
//                 maxnum=max(maxnum,nums[index][ele+1]);
//             }
//             else break;

//         }
//         return {mini,maxi};
//     }
// };