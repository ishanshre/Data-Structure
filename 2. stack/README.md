# Stack Data Structure
1. Stack is a liner data structure.
2. It follows Last In First Out principle
3. Real Life Examples: backspace function in text editor, deck of cards, piles of books, piles of money and many more
4. Stack has only one end from which we push or pop
5. Inserting New element to the stack is push operation
6. Removing or deleting element from the stack is pop operation
7. Displaying the last element of the stack is called peek operation

## Primary Stack Operation
1. push() ------> Insert the element to the stack
2. pop() -------> Remove or delete the elements from the stack

## Secondary/Axuilary Stack Operation
1. peek() ------> Printing the last element of stack
2. size() ------> Total size of the stack
3. is_empty() --> Return True if stack is empty else false
4. is_full() ---> Return True if stack is full else false

## Stack Program Examples and Applications:
1. Reversing the Word, or any sets of data
2. Matching HTML and XML tags
3. Undo function in text editors
4. Infix to PostFix conversion 
5. Stack are used for backtracking and parenthesis matching
6. Infix to Postfix
7. Implementing function calls


## Efficiency of Stack
1. Items in the stack can be pushed or poped in time complexity of order 1 i.e. O(1)
2. Time is not dependent on how many items are avaliable in the stack. No comparision is needed in stack

## Advantages of Stack
1. Stacks helps in managing data the follows LIFO principles
2. Stacks are used for systemetc Memory Management
3. Stack helps in efficient function management. When a function is called, local variable and other function parameters are stored in stack and automatically deleted once returned from the function
4. Elements in the stack do not corrupt easily. They are safe and reliable
5. Stack allows control over memory allocation and deallocation
6. It cleans up the objects automatically

## Disadvantages of Stack
1. Stack memory is of limited size
2. The total size of the stack must me define before
3. To many objects leads to stack overflow
4. Random accessing is not possible in stack


## Algorithm for push()
1. Add items to the stack if stack is not full otherwise return stack overflow
2. Procedure for push :-
  begin
  if stack is full
    return stack overflow
  else
    increase the top value
    assign the item into stack with index top
  end if-else
  end procedure

## Algorithm for pull()
1. pull() method removes the item from the stack. Check if stack is empty then return stack underflow else store the value of stack with index top and decrement the top.
2. Procedure for pull() :-
  begin
  if stack is empty
    return stack underflow
  else
    store the value of stack[top]
    decrement the top
  end if else
  end procedure


## Algorithm for top
1. Return the element of stack with index top
2. Procedure:
  begin
  return stack[top]

## Algorithm for isEmpty()
1. if value of top is less than 1 then return stack is empty else return stack is not empty
2. Procedure 
  begin
  if top < 1
    reutrn stack is empty
  else
    return stack is not empty
  end procedure

## Algorithm for isFull()
1. If the value of top is equal to or greater than size of stack - 1 return is full else stack is empty
2. Procedure
  begin
    if (top >= size of stack - 1):
      return stack is full or overflow
    else 
      return stack is empty
    end if-else
  end procedure
