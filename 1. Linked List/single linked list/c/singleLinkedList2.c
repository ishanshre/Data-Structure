#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr){
    while(ptr!= NULL){
        printf("%d\n", ptr-> data);
        ptr = ptr->next;
    }
}

struct node *deleteLast(struct node *head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return (head);

}

void main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    forth = (struct node*)malloc(sizeof(struct node));
    head -> data = 4;
    head -> next = second;
    second -> data = 40;
    second -> next = third;
    third -> data = 124;
    third -> next = forth;
    forth -> data = 77;
    forth -> next = NULL;
    printf("Displaying Linked list before deletion");
    linkedListTraversal(head);
    head = deleteLast(head);
    printf("Linked List after deletion");
    linkedListTraversal(head);


}