#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void main() {
    struct node *first, *middle, *last;
    first = (struct node*)malloc(sizeof(struct node));
    middle = (struct node*)malloc(sizeof(struct node));
    last = (struct node*)malloc(sizeof(struct node));
    first -> data = 10;
    middle -> data = 100;
    last -> data = 1000;
    first -> next = middle;
    first -> prev = NULL;
    middle -> prev = first;
    middle -> next = last;
    last -> prev = middle;
    last -> next = NULL;
    struct node *head = first;
    while (head != NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}