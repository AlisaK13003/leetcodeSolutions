/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    var middle = head;
    var end = head;

    while (end != null && end.next != null) {
        middle = middle.next
        end = end.next.next
    }

    return middle
};