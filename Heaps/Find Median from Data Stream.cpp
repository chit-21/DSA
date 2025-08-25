// class MedianFinder {
// public:

//     priority_queue<int,vector<int>,greater<int>> mini;
//     priority_queue<int> maxi;
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         if(maxi.empty() || maxi.top()>=num)maxi.push(num);
//         else mini.push(num);
//         if(maxi.size()>mini.size()+1){
//             mini.push(maxi.top());
//             maxi.pop();
//         }
//         else if(mini.size()>maxi.size()+1){
//             maxi.push(mini.top());
//             mini.pop();
//         }
        
//     }
    
//     double findMedian() {
//         if(maxi.size()==mini.size())return (double)(maxi.top()+mini.top())/2;
//         else if(maxi.size()>mini.size())return maxi.top();
//         else return mini.top();
        
//     }
// };

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */