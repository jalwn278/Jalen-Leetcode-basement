/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    
    int count = 0;

    struct ListNode* tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    tmp = head;

    int mid = count / 2;

    for (int i = 0; i < mid; i++)
    {
        tmp = tmp->next;
    }

    return tmp;
}