// You are given an array nums of n positive integers.

// You can perform two types of operations on any element of the array any number of times:

// If the element is even, divide it by 2.
// For example, if the array is [1,2,3,4], then you can do this operation on the last element, and the array will be [1,2,3,2].
// If the element is odd, multiply it by 2.
// For example, if the array is [1,2,3,4], then you can do this operation on the first element, and the array will be [2,2,3,4].
// The deviation of the array is the maximum difference between any two elements in the array.

// Return the minimum deviation the array can have after performing some number of operations.



// class Solution {
// public:
//     int minimumDeviation(vector<int>& nums) {
//          multiset<int> ms;

//         // 1. Normalize odds → evens
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] % 2 == 1) nums[i] *= 2;
//             ms.insert(nums[i]);
//         }

//         int mini = INT_MAX;

//         // 2. Keep shrinking the max
//         while (true) {
//             int start = *ms.begin();
//             int end = *ms.rbegin();
//             mini = min(mini, end - start);

//             if (end % 2 == 0) {
//                 ms.erase(prev(ms.end())); // remove max
//                 ms.insert(end / 2);       // divide max by 2
//             } else {
//                 break;
//             }
//         }
//         return mini;
//     }
// };

 