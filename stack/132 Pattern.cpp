// class Solution {
// public:
//     bool find132pattern(vector<int>& nums) {
//         stack<int> st;
//         vector<int> prevmini(nums.size(),0);

//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<nums[prevmini[i-1]]){
//                 prevmini[i]=i;
//             }
//             else{
//                 prevmini[i]=prevmini[i-1];
//             }
//         }

//         for(int i=0;i<nums.size();i++){
//             while(!st.empty() && nums[st.top()]<=nums[i])st.pop();
//             if(!st.empty()){
//                 if(nums[prevmini[st.top()]]<nums[i])return true;
//             }
//             st.push(i);
//         }


//         return false;
//     }
// };