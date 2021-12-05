// ListNode* deleteDuplicates(ListNode* head) {
//     ListNode* currentNode = head;
//     while(currentNode != nullptr && currentNode->next != nullptr){
//         if(currentNode->val == currentNode->next->val){
//             currentNode->next = currentNode->next->next;
//         }else{
//             currentNode = currentNode->next;
//         }
//     }
//     return head;
// }