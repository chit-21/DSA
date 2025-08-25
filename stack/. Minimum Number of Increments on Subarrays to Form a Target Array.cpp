// You are given an integer array target. You have an integer array initial of the same size as target with all elements initially zeros.

// In one operation you can choose any subarray from initial and increment each value by one.

// Return the minimum number of operations to form a target array from initial.

// The test cases are generated so that the answer fits in a 32-bit integer.

//  class Solution {
// public:
//     int minNumberOperations(vector<int>& target) {
//         int maxi=target[0],count=target[0];
//         for(int i=1;i<target.size();i++){
//                 if(target[i]>maxi){
//                     count+=(target[i]-maxi);
//                     maxi=target[i];
//                 }
//                 else{
//                     maxi=min(maxi,target[i]);
//                     // count+=(target[i]-maxi);
//                 }
//         }
//         return count;
//     }
// };