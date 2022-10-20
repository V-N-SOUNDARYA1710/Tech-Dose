class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode slow = head,fast = head;
        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        slow = reverse(slow);
        while(slow != null)
        {
            if(head.val != slow.val)
            {
                return false;
            }
            head = head.next;
            slow = slow.next;
        }
        return true;
    }
    public static ListNode reverse(ListNode c)
    {
        ListNode next = c,prev = null;
        while(c != null)
        {
            next = c.next;
            c.next = prev;
            prev = c;
            c = next;
        }
        return prev;
    }
}
