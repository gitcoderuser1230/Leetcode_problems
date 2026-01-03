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
    ListNode* reverseList(ListNode* head) {
        //linked list reversal is nothing but removing and forming new connections using these pointers but doing this in so such that the address is being preserved while removing and forming to avoid memory leakage...
        //here we will be using three pointers as for reversing the linked list first we will have to remove the existing connection (between current and next ) and form new connection(between current and previous) for all nodes to reverse it and do this until the current points to null and hence previous pointer will be pointing to the new head of the reversed linked list and we will return previous at end...
        //at starting previous and next will not be pointing to valid position so they are initialized to null and current will point initially to head pointer so it is so...
        ListNode* previous=NULL;//this will point to node which is previous to current node..
        ListNode* current=head; //this will point to current node..
        ListNode* next=NULL;//this will point to node which is next to current node..

        while(current!=NULL){//while current does not points to null we will iterate..
            next=current->next; //first we will preserve the address of  node which  is  next to current node..
            current->next=previous; //then we will form new connection to previous node 
            //then iterate over next node ...
            // moving all three pointers forward in a way that we preserve the address of the nodes we don't lose them...
            previous=current; //first previous value needs to preserve the existing value of current as current will also be updated..
            current=next; //current node will be moved to the position at next node..
            //then after in next iteration next will be automatically be updated ...
        }
        return previous; //finally returning the previous pointer as the head of the list...
    }
};