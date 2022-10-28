#include<stdio.h>
int queue[20];
int n;
int rear = -1;
int front = -1;

int getElement();
int is_empty();
int is_full();
void enqueue();
void dequeue();
void peek();
void display();

void main(){
    int choice;
    printf("Enter the size of the queue: \n");
    scanf("%d", &n);
    do {
        printf("\n--------------------------------------");
        printf("\n  1.Check Queue is Empty?\n2.Check Queue is Full?\n3. Insert into queue\n4. Remove from queue\n5. Peek\n6. Display Queue\n7. exit\n");
        printf("\n--------------------------------------");
        printf("Enter the choice: \n");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                if (is_empty() == 1)
                    printf("The queue is empty\n");
                else 
                    printf("The queue is not empty\n");
                break;
            case 2: 
                if (is_full() == 1)
                    printf("the queue is full\n");
                else
                    printf("The queue is not full\n");
            case 3: enqueue();break;
            case 4: dequeue();break;
            case 5: peek();break;
            case 6: display();break;
        }
    } while(choice >= 1 || choice <= 6);
}

int getElement(){
    int item;
    printf("Enter the element to add in a queue!\n");
    scanf("%d", &item);
    return item;
}

int is_empty() {
    if (front == -1 && rear == -1){
        return 1;
    }
    return 0;
}
int is_full() {
    if (rear == n-1){
        return 1;
    }
    return 0;
}

void enqueue(){
    if (is_full() == 1) {
        printf("Queue Overflow!\n");
    }
    else if (is_empty() == 1){
        front = rear = 0;
        queue[rear] = getElement();
    }
    else {
        
        rear++;
        queue[rear] = getElement();
    }

}

void dequeue(){
    if (is_empty() == 1){
        printf("Queue underflow! or Queue is Empty");
    }
    else if (front==rear){
        printf("The dequeued element is --> %d", queue[front]);
        front = rear = -1;
    }
    else {
        printf("The dequeued element is --> %d", queue[front]);
        front++;
    }
}

void display(){
    if (is_empty() == 1){
        printf("stack underflow or stack is empty\n");
    }
    else {
        printf("The queue is: \n");
        for (int i=front; i<rear+1;i++){
            printf("%d\n", queue[i]);
        }
    }
}

void peek(){
    if (is_empty() == 1){
        printf("Queue underflow or queue is empty\n");
    }
    else 
        printf("The first element or the front element is : %d", queue[front]);

}