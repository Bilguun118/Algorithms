package Go

/*
 * Definition for singly-linked list.
 */

type ListNode struct {
	Val  int
	Next *ListNode
}

func reverseKGroup(head *ListNode, k int) *ListNode {
	// Iterative Approach
	// Dummy Node
	csntNode := &ListNode{0, head}
	// For Finding KTH Node
	var counter int = k
	var kthNode *ListNode = csntNode

	// It means Start of a first group
	var previousGroup *ListNode = csntNode
	var nextGroup *ListNode
	var curr *ListNode
	var prev *ListNode

	for {
		kthNode = getKnode(previousGroup, counter)

		// End of Linked Lists
		if kthNode == nil {
			break
		}
		// Here We Find Next Group (Anything Beyond kth node is next group of linked list)
		nextGroup = kthNode.Next

		// Reverse Function Begins Here
		prev = kthNode.Next
		curr = previousGroup.Next
		var tmp *ListNode
		for curr != nextGroup {
			tmp = curr.Next
			curr.Next = prev
			prev = curr
			curr = tmp
		}
		tmp = previousGroup.Next
		previousGroup.Next = kthNode
		previousGroup = tmp
	}
	return csntNode.Next
}

// For Finding Kth Node
func getKnode(currentNode *ListNode, k int) *ListNode {
	for currentNode != nil && k > 0 {
		currentNode = currentNode.Next
		k--
	}
	return currentNode
}
