class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head == null)
        {
            return null;
        }
        ListNode c=head;
        int count = 0;
        while(count < k && c!=null)
        {
            count++;
            c = c.next;
        }
        if(count != k)
        {
            return head;
        }
        ListNode curr = head,prev = null,next = null;
        count = 0;
        while(count < k && curr!= null)
        {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next != null)
        {
                head.next = reverseKGroup(next,k);
        }
        return prev;
    }
}
