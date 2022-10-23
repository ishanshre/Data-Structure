from stack import *


def getSize():
    try:
        size = int(input("Enter the size of the stack: "))
        if size < 0:
            raise ValueError()
        return size
    except ValueError:
        print("The size must be positive integer")
    
size = None
while size == None:
    size = getSize()

stack1 = Stack(size)

while True:
    choice = int(input("Enter your choice: \n1. Check Empty\n2. Check Full\n3. Display Stack\n4. Push item\n5. Pop item\n6. Peek stack\n7. quit\nInput Your choice: "))
    match choice:
        case 1: 
            if stack1.is_empty():
                print("The stack is empty")
            else:
                print("Stack is not empty")
        case 2: 
            if stack1.is_full():
                print("Stack is Full\n")
            else:
                print("Stack is not Full\n")
        case 3:
            print(stack1.__str__())
        case 4:
            item = input("Enter the item to push: ")
            stack1.push(item)
        case 5:
            print(f"Popped item: {stack1.pop()}")
        case 6:
            print(stack1.peek())
        case 7:
            break
        case _: 
            print("wrong choice")
