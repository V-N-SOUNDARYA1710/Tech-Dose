public class Solution {
    public boolean hasCycle(ListNode head) {
        HashSet<ListNode> h = new HashSet<>();
        while(head!=null)
        {
            if(h.contains(head))
            {
                return true;
            }
            h.add(head);
            head = head.next;
        }
        return false;
    }
}

/*
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode slow = head,fast = head;
        while(slow !=null && fast != null && fast.next!=null)
        {
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
    }
}
*/
