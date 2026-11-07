/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head){
            return nullptr;
        }

        int m = 0;
        ListNode* curr = head;

        while(curr != nullptr){
            curr = curr -> next;
            m++;
        }

        int k = m - n;
        ListNode* temp = head;

        for(int i = 0; i < k-1; i++){
            temp = temp -> next;
        }

        if(k == 0){
            ListNode* deleteHeadNode = head;
            head = head -> next;
            delete deleteHeadNode;

            return head;
        }

        ListNode* deleteNode = temp -> next;
        temp -> next = temp -> next -> next;
        delete deleteNode;

        return head;
    }
};