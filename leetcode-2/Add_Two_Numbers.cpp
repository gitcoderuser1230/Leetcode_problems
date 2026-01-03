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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //here we are initializing the result pointer list with zero as a placeholder for head node value..
        ListNode* result= new ListNode(0); //result pointer pointing to the third list..
        ListNode* ptr=result; //pointer ptr pointing to the list where result points..
// here we do not simply use result pointer and move it forward in the loop because we want to store and keep the track of the head of the list so we will take another pointer ptr that will point to same list and will be moved forward for adding more nodes to this list...

        int carry=0;  //initialized carry  outside the loop because we need to retrieve the  previous carry if it is in next sum and so sum is on temporary basis so we will simply initialize it inside the loop and initialize it with  carry if carry has  any  value then we will add it along with the  digits of l1 and l2...
        while(l1!=nullptr || l2!=nullptr){// this makes sure  that the loop iterates until any of the list has non leaf nodes....
            int sum=carry; //initialize sum with  carry..
            if(l1!=nullptr){ //if l1 is not pointing to null
                sum+=l1->val; //adding its value..
                l1=l1->next; //moving l1 pointer forward...
            }
            //similar  steps like l1..
            if(l2!=nullptr){
                sum+=l2->val; // sum now becomes sum=carry+l1->val+l2->val 
                l2=l2->next;
            }
            carry=sum/10; //get carry eg sum=14 then carry is one here and 14/10 will help us extract 1 out of 14
            sum=sum%10; //get sum value eg sum=14 then sum is 4 and 14%10 will help us extract 4 out of 14..

            ptr->next=new ListNode(sum); //adding new node with sum as its value (sum=carry+l1->val+l2->val)...
            ptr=ptr->next; //moving pointer forward..
        }
        if(carry==1) ptr->next=new ListNode(1); //if carry still remains one then we will add new node with one..

        return result->next; //skip first node as it is zero just initialized we will return head of next..
    }
};
