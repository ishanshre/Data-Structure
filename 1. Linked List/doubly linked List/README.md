# Doubly Linked List
1. Unlike Singly Linked List, It consist of three parts. They are the data part and two address part.
2. We can say Doubly Linked List has a data part, address to next node and address to previous node.
3. At head part of linked list is a node whose previous address is null and the linked list ends with the next address being null
    ```
    (HEAD, null address)<====>|previous address|Data|next address|<====>|previous address|Data|next address|<====>(TAIL, null address)

## In C,
    ```
        struct node {
            int data;
            struct node *next;
            struct node *prev;
        };


## In Python,
    ```
        class Node:
            def __init__(self, next=None, prev=None, data=None):
                self.next = next;
                self.prev = prev;
                self.data = data;


## Advantages of Doubly Linked List Over Singly Linked List
1. It can be traversed in both forward and backward direction unlinke unidirectional singly linked list.
2. The delete is more efficient in doubly linked list if a pointer to the node to be deleted is given as we have access to its previous node.
3. We can quickly insert a new node before a given node.
4. Reversing a doubly linked list is very easy. We only need to swap each node previous and next pointer and update the head node to point to the last node 

## Disadvantages of Doubly Linked List
1. It comsumes extra memory space compared to singly linked list due to exta previous node address. (We can overcome this disadvantages using XOR linked list)
2. We cannot access random element as they are stored at random location. We can access them sequentially
3. Operation time is increased due to handling of extra previous pointer. For example, if we insert new node we need to modify previous and next node. Same case is for deletion

# Circular Doubly Linked List
1. It is a doubly linked list
2. The only difference is that next address pointer of last node stores the address of first node and previous node of the first node stores the address of last node.
