#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

bool hasCycle(ListNode *head) {
        if(head == NULL) {
            return false;
        }
        ListNode * slow,* fast = head;
        while(fast!=NULL) {
            if(slow) {
                slow = slow->next;
            }
            else {
                return false;
            }
            if(fast->next) {
                fast = fast->next->next;
            }else {
                return false;
            }
            if(fast!=NULL && slow!=NULL) {
                if(slow== fast) {
                return true;
                 }
            }
            
            
        }
        return false;
}