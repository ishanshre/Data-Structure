# Linked List
1. Linked List is a liner data structure
2. Every linked list has two parts.They are data section and address section.
3. Data Section consist of the elements whereas address section contains the address of next element of list which is called node
4. Size of the linked list is not fixed and can be stored in any location in the list
5. Unlike arrays, linked list elements are not stored at a contiguous location
Head --> |data|addr| --> |data|addr| --> |data|null| --> Tail 

## Advantages of Linked List
1. Dynamic Array
2. Easy Insertion and Deletion process

## Disadvantages of Linked List
1. Random Access is not allowed. We have to access elements sequentially from the head node. We cannot do binary search with default implementation
2. Linked List uses extra memory space for storing memory address
3. Linked list are not cached friendly

## Basic Operation of Linked List
1. Traversing: To traverse all the node one by one. Display all the nodes 
2. Insertion: To insert new node at specific positions
3. Deletion: To delete nodes from specific position
4. Search: To search for an element from the linked list


## Representation of Linked List
1. In C,
    ```
    struct Node {
        int data;
        struct Node* next;
    }

2. In Python,
    ```
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None
    
    class LinkedList:
        def __init__(self):
            self.head  = None

## Types of Linked List
1. Singly Linked List
2. Doubly Linked List
3. Circular Linked List
4. Doubly Circular Linked List



