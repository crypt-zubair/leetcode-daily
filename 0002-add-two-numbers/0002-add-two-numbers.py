class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ListNode = type(l1)
        dummy = ListNode(0)
        curr = dummy
        carry = 0
        while l1 and l2:
            total = l1.val + l2.val + carry
            carry = total // 10
            curr.next = ListNode(total % 10)
            curr = curr.next
            l1 = l1.next
            l2 = l2.next
        while l1:
            total = l1.val + carry
            carry = total // 10
            curr.next = ListNode(total % 10)
            curr = curr.next
            l1 = l1.next
        while l2:
            total = l2.val + carry
            carry = total // 10
            curr.next = ListNode(total % 10)
            curr = curr.next
            l2 = l2.next
        if carry:
            curr.next = ListNode(carry)
            
        return dummy.next