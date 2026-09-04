/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
  struct ListNode* new=malloc(sizeof(struct ListNode));
  new->next=head;
    while(head!=NULL)
    {
        if(head->next!=NULL && head->next->val==head->val)
        {
            head->next=head->next->next;
            
        }
        else
        head=head->next;
    }
    return new->next;
    
}