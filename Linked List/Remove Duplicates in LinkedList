class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode curr = head;
        while(curr != null)
        {
            int s = curr.val;
            ListNode c = curr.next;
            while(c != null && c.val == s)
            {
                c = c.next;
            }
            curr.next = c;
            curr = curr.next;
        }
        return head;
    }
}
