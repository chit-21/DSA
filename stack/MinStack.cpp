// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.



// two stacks one stores in actual order and the other stores the minimums


// class MinStack {
// public:


//     stack<int> st,mini;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         st.push(val);
//         if(mini.empty() || mini.top()>=val)mini.push(val);
        
//     }
    
//     void pop() {
//         if(st.top()==mini.top()){
//             mini.pop();
//         }
//         st.pop();
        
//     }
    
//     int top() {
//         return st.top();
        
//     }
    
//     int getMin() {
//         return mini.top();
//     }
// };