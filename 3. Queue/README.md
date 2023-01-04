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

#Algorithm for linear queue
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


## Algorithm for enqueue()
1. If queue is full return Queue overflow
2. Else if queue is empty then front and rear set to zerto and queue[rear] set to new item
3. Else increament the rear and queue[rear] set to new item
4. Procedure:
    begin
        if queue is full or rear equals to (szie of queue - 1)
            return Queue is full or Queue Overflow
        else if queue is empty
            set front and rear to zero
            set queue[rear] equals to new item
        else
            increment rear
            set queue[rear] equals to new itemn
        end if else
    end procedure

## Algorithm for dequeue()
1. If queue is empty then return Queue Underflow
2. Else if there is only one item in queue or front equals to rear then store the element of queue[front] in a another variable and set front and rear to -1
3. Else store the element queue[front] in another variable and increment the front
4. Procedure :
    begin
        if queue is empty or front and rear < 0
            return queue under flow or empty
        else if front equals to rear
            store the element queue[front] to another variable
            front = rear = -1
        else
            increse the front by 1
        end if else
    end procedure


## Algorithm for display()
1. Check if queue is empty then return queue underflow or empty
2. Else display the value from front to rear using loop
3. Procedure:
    begin
        if queue is empty:
            return queue under flow or empty
        else
            display the items from front to the rear
        end if else
    end procedure


## Algorithm for peek
1. Check if queue is empty then return queue underflow or empty
2. if not empty then display the front element
3. Procedure:
    begin 
        if queue is empty
            return queue underflow or queue empty
        else
            return queue[front]
    end procedure


