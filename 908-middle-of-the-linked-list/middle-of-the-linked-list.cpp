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

    void insertAtEnd(ListNode *& head1, int data){
        ListNode*newNode = new ListNode(data);
        if(head1 == NULL){
            head1=newNode;
            return;
        }
        ListNode*temp=head1;
        while(temp -> next != NULL){
            temp = temp -> next;
        }

        temp -> next = newNode;
    }


    ListNode* middleNode(ListNode* head) {
        vector<int> lists;
        while(head!= NULL){
            lists.push_back(head -> val);
            head = head -> next;
        }

        ListNode*head1 = NULL;
        for(int i = lists.size()/2; i < lists.size(); i++){
            insertAtEnd(head1, lists[i]);
        }

        return head1;
    }
};