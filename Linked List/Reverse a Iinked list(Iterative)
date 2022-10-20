class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode next = null;
        ListNode prev = null;
        while(head != null)
        {
            next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
}
