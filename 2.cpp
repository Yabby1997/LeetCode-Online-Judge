/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyResult = new ListNode(0);
        ListNode* currentNode = dummyResult;
        ListNode* currentL1 = l1;
        ListNode* currentL2 = l2;
        int currentValue = 0;
        int currentCarry = 0;
        while(currentL1 != NULL || currentL2 != NULL){
            int x = (currentL1 == NULL) ? 0 : currentL1->val;
            int y = (currentL2 == NULL) ? 0 : currentL2->val;
            currentValue = (x + y + currentCarry) % 10;
            currentCarry = (x + y + currentCarry) / 10;
            currentNode->next = new ListNode(currentValue);
            currentNode = currentNode->next;
            if(currentL1 != NULL) currentL1 = currentL1->next;
            if(currentL2 != NULL) currentL2 = currentL2->next;
        }
        if(currentCarry > 0){
            currentNode->next = new ListNode(currentCarry);
        }
        return dummyResult->next;
    }
};
