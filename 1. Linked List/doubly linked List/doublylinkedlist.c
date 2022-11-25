
#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;
struct node *current = NULL;


void insert(int data){
    // allcoate memory for new node
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    if (head == NULL){
        head = newNode;
        return;
    }
    current = head;
    while (current->next != NULL){
        current = current->next;
        last = newNode;
        newNode -> prev = current;
    }
}

void display(){
    struct node *ptr = head;
    printf("\n [head] <=> ");
    while (ptr-> next != NULL)
    {
        printf("%d <=> ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d <=> ", ptr->data);
    printf("[head]\n");    
}

void main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    display();
}