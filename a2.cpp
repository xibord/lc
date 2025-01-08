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
        ListNode* answer;
        answer = new ListNode;
        ListNode* temp = answer;
        ListNode* tl1 = l1;
        ListNode* tl2 = l2;
        int l1Count = 0;
        l1Count += 1;
        int carry = 0;
        int eq = 0;
        int et = 0;
        int temp1 = 0;
        int temp2 = 0;

        while(tl1->next != 0 || tl2->next != 0) {
            temp1 = 0;
            temp2 = 0;
            if (tl1 != NULL) {
                temp1 = tl1->val;
            }
            else {
                 temp1 = 0;
            }
            if (tl2 !=NULL) {
                 temp2 = tl2->val;
            }
            else {
                 temp2 = 0;
            }
            
            int temp3 = temp1 + temp2 + carry;
            carry = 0;

            if (temp3 > 9) {
                temp3 = temp3 - 10;
                carry = 1;
            }

            temp->val = temp3;
            cout << temp3;
            cout << '\n';
            cout << carry;

            cout << '\n';
            cout << '\n';

            //Creates new nodes and adjusts next pointer of current node
            ListNode* tn;
            tn = new ListNode;
            temp->next = tn;
            temp = tn;
            l1Count += 1;
            if (tl1->next !=0) {
                tl1 = tl1->next;
            }
            else {
                tl1->val = 0;
                et = et + 1;
            }
            if (tl2->next !=0 ) {
                tl2 = tl2->next;
            }
            else {
                tl2->val = 0;
                eq = eq + 1;
            }
            
        }

        if ((eq < 1) && (et <1)) {
            temp1 = tl1->val;
            temp2 = tl2->val;

            int temp3 = temp1 + temp2 + carry;
            carry = 0;

            if (temp3 > 9) {
                temp3 = temp3 - 10;
                carry = 1;
            }

            temp->val = temp3;

            cout << temp3;
            cout << '\n';
            cout << carry;

            cout << '\n';
            cout << '\n';
        }
        else if (eq >= 1) {
            temp1 = tl1->val;
            temp2 = 0;

            int temp3 = temp1 + temp2 + carry;
            carry = 0;

            if (temp3 > 9) {
                temp3 = temp3 - 10;
                carry = 1;
            }

            temp->val = temp3;
        }
        else {
            temp1 = 0;
            temp2 = tl2->val;

            int temp3 = temp1 + temp2 + carry;
            carry = 0;

            if (temp3 > 9) {
                temp3 = temp3 - 10;
                carry = 1;
            }

            temp->val = temp3;
        }

        if (carry == 1) {
            ListNode* tn;
            tn = new ListNode;
            temp->next = tn;
            temp = tn;
            temp->val = 1;
        }

        return answer;
    }
};