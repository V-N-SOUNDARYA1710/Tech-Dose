class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode curr = new ListNode(0,head);
        ListNode pred = curr;
        while(head != null)
        {
            if(head.next != null && head.val == head.next.val)
            {
                while(head.next!=null && head.next.val == head.val)
                {
                    head = head.next;
                }
                pred.next = head.next;
            }
            else
            {
                pred = pred.next;
            }
            head = head.next;
        }
        return curr.next;
    }
}
