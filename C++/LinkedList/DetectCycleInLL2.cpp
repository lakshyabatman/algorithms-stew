#include<iostream>
using namespace std;
class ListNode {
    public:
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL) {
            return NULL;
        }
        ListNode *slow, *fast = head;
        while (fast && fast->next && slow) {
            slow = slow->next;
            fast = (fast->next)->next;
            if(slow == fast) {
                fast = head;
                while(fast!=slow) {
                    slow = slow->next;
                    fast = fast->next;
                }
                cout << slow <<endl;
                return slow;
            }
        }
        return NULL;
        
    }
};

ListNode *obj = new ListNode();