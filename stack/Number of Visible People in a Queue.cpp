// There are n people standing in a queue, and they numbered from 0 to n - 1 in left to right order. You are given an array heights of distinct integers where heights[i] represents the height of the ith person.

// A person can see another person to their right in the queue if everybody in between is shorter than both of them. More formally, the ith person can see the jth person if i < j and min(heights[i], heights[j]) > max(heights[i+1], heights[i+2], ..., heights[j-1]).

// Return an array answer of length n where answer[i] is the number of people the ith person can see to their right in the queue.





// just maintain a increasing stack and count the elements you are poping out because you can see them if  stack is nnot empty 
// then there xount++;
// and store for that 


// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& heights) {
//         stack<int> st;
//         vector<int> answer(heights.size(),0);
//         for(int i=heights.size()-1;i>=0;i--){
//             int cnt=0;
//             while(!st.empty() && st.top()<=heights[i]){
//                 cnt++;
//                 st.pop();
//             }
//             if(!st.empty())cnt++;
//             answer[i]=cnt;
//             st.push(heights[i]);
//         }
//         return answer;
//     }
// };


// just have to store either the size ,the differnece between the indexes or the number of elements to be popout