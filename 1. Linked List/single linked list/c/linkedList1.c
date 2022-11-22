#include<stdio.h>
#include<stdlib.h>
void push();
struct node {
    int data;
    struct node *next;
};

void main(){
    struct node *first, *middle, *last;
    //allocate memory for each node
    first = (struct node*)malloc(sizeof(struct node));
    middle = (struct node*)malloc(sizeof(struct node));
    last = (struct node*)malloc(sizeof(struct node));
    // assiginig values to each node
    first -> data = 10;
    middle -> data = 20;
    last -> data = 30;

    // connecting the nodes
    first -> next = middle;
    middle -> next = last;
    // assuming temp as a head reference pointer
    struct node *head = first;
    // print the nodes
    // head is refrenced with first then head data stores the first node data and head address stores the first next node pointer and so on
    while (head != NULL){
        printf("%d ->",head->data );
        head = head->next;
    }
    printf("NUll\n");
}

void push(){
    
}
