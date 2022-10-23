#include <stdio.h>

int stack[20], top=-1, n;
void push();
void pop();
void display();
void main(){
    int choice;
    printf("Enter the size of the stack:\n");
    scanf("%d", &n);
    do {
        printf("\n--------------------------------------");
        printf("\n  1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\n--------------------------------------");
        printf("Enter the choice: \n");
        scanf("%d", &choice);
        switch(choice){
            case 1: push();break;
            case 2: pop();break;
            case 3: display();break;
        }
    } while(choice >= 1 || choice <= 3);
}

void push(){
    if (top >= n-1)
        printf("Stack Overflow\n");
    else {
        printf("Enter the element to push:\n");
        top++;
        scanf("%d", &stack[top]);
    }
}

void pop(){
    int temp;
    if (top < 0){
        printf("Stack underflow\n");
    }
    else {
        temp = stack[top];
        top--;
        printf("Poped element : %d", temp);
    }
}

void display(){
    if (top < 0){
        printf("Stack Underflow");
    }
    else{
        printf("Displayinh the elements of the stack\n");
        for(int i=top;i>=0;i--){
            printf("\n%d", stack[i]);
        }
    }
}