// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

// Merge all the linked-lists into one sorted linked-list and return it.






// code
// ListNode* mergeKLists(vector<ListNode*>& lists) {
//     priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> pq;
//     for(int i=0;i<lists.size();i++){
//         if(lists[i])
//         pq.push({lists[i]->val,lists[i]});
//     }
//     ListNode* d=new ListNode(-1);
//     ListNode* temp=d;
//     while(!pq.empty()){
//         auto t=pq.top();
//         pq.pop();
//         if(t.second->next){
//             pq.push({t.second->next->val,t.second->next});
//         }
//              temp->next=t.second;
//             temp=temp->next;
        
        
//     }
//     return d->next;
// }

 