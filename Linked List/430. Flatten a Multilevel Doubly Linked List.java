class Solution {
    public Node flatten(Node head) {
        Node curr = head;
        while(curr != null)
        {
            if(curr.child != null)
            {
                Node c = curr.child;
                while(c.next!=null)
                {
                    c = c.next;
                }
                c.next = curr.next;
                if(curr.next!=null)
                {
                    curr.next.prev = c;
                }
                curr.next = curr.child;
                curr.child.prev = curr;
                curr.child = null;
            }
            curr = curr.next;
        }
        return head;
    }
}
