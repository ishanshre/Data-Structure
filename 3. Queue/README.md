# Queue
1. Queue is a linear data structure.
2. It follows the principle of First In First Out(FIFO). So first element entered in the array is the first element to be removed.
3. Unlike Stack, queue is open at the both end. One end is used for insertions whereas other end is used for deletion.
4. Endpoint for insert is called rear whereas endpoint for remove is called front
5. Examples
    - People waiting in a line to buy tickets
    - In computer system, jobs waiting to run, messages to be passed over the network, printing jobs waiting to be printed and so on.
    - Also stores user input like keystrokes, touchscreen touches, mouse clicks and microphone inputs

## Primary Operations
1. insert() or enqueue() - Insert the element from the rear end
2. remove() or dequeue() - Remove the element from the front end


## Secondary Operations
1. front() or peek() - Display the elements that is going to be deleted.
2. is_empty() - Return True if queue is empty else False
3. is_full() - Return True if queue is full else False
4. display() - Display all the elements of the queue

## Types of Queue
1. Simple Queue
2. Circular Queue
3. Priority Queue


## Algorithm for isEmpty()
1. if values of front and rear is less than zero then return queue is empty else return queue is not empty
2. Procedure :-
    begin
    if (front and rear < zero)
        return queue is empty
    else
        return queue is not empty
    end if else
    end procedure

## Algorithm for isFull()
1. if value of rear is equals to (size of queue - 1) then  return queue is full else return queue is not full
2. Procedure
    begin
        if (rear equals to (size of queue - 1)
            return queue is full
        else
            return queue is not full
        end if else
    end procedure




