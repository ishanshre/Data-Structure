# Singly Linked List
1. It is most common linked list.
2. If we tell linked list only then it means we studying singly linked list
3. It consist of two parts. The data part and the address part. The address part consist of the memory address if the next node.
4. It is called singly linked list as it contains only one link to the next node.
5. It goes in one direction only

## In C,
    '''
    struct node {
        int data;
        struct node *next;
    };


## In Python,
    ```
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None
    
    class LinkedList:
        def __init__(self):
            self.head  = None


# Circular Linked List
1. It is a singly linked list.
2. The only difference is that the next pointer of the node points to the head node
