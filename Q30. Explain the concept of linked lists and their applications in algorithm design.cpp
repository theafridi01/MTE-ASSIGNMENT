- **Linked Lists:**
-A linked list is a linear data structure where elements (called nodes) are stored 
 in non-contiguous memory locations.

 Each node contains:
  1.Data – the value stored.
  2.Pointer (or link) – a reference to the next node in the sequence.


 - **Types of Linked Lists:**

Singly Linked List - Nodes have one pointer to the next node only.
Doubly Linked List - Nodes have two pointers (next and previous).
Circular Linked List - Last node points back to the first node (forming a loop).

- **Applications in Algorithm Design:**
1.Stacks & Queues - 
Linked lists efficiently implement these with constant-time 
insertions/removals.

2.Hash Tables (Separate Chaining) -
Linked lists are used to handle collisions in hash maps.

3.Graph Adjacency Lists - 
Nodes in a graph can be represented as linked lists of neighbors.

4.Memory Management - 
Used in operating systems to manage memory blocks.


- **Time Complexity:**
Insert at head -> O(1)
Insert at tail -> O(n) (or O(1) with tail pointer)
Deletion -> O(n) (need to find prev node)
Search -> O(n)
Access by index -> O(n)

- **Structure of a Node:**
 - Data: The value stored in the node.
 - Next: A pointer to the next node in the sequence.
 
 - CODE  :
 struct Node {
    int data;
    Node* next;
};



