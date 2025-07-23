// The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.

// For example, for arr = [2,3,4], the median is 3.
// For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
// Implement the MedianFinder class:

// MedianFinder() initializes the MedianFinder object.
// void addNum(int num) adds the integer num from the data stream to the data structure.
// double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.
 



// with the hepl of two heaps mini heap stores all maximum numbers later half in ascending order and 
// maxheap stores all smaller  numbers in descending numbers.....



// code
// class MedianFinder {
//     public:
    
//         priority_queue<int,vector<int>,greater<int>> mini;
//         priority_queue<int> maxi;
//         MedianFinder() {
            
//         }
        
//         void addNum(int num) {
//             if(maxi.empty() || maxi.top()>=num)maxi.push(num);
//             else mini.push(num);
//             if(maxi.size()>mini.size()+1){
//                 mini.push(maxi.top());
//                 maxi.pop();
//             }
//             else if(mini.size()>maxi.size()+1){
//                 maxi.push(mini.top());
//                 mini.pop();
//             }
            
//         }
        
//         double findMedian() {
//             if(maxi.size()==mini.size())return (double)(maxi.top()+mini.top())/2;
//             else if(maxi.size()>mini.size())return maxi.top();
//             else return mini.top();
            
//         }
//     };