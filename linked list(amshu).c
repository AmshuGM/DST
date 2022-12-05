// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
    
};


struct node * create(){
    struct node* newnode=NULL;
    return newnode=(struct node *)malloc(sizeof(struct node*));
}

struct node* beginsert(struct node* head){
    
    struct node* temp=head;
    struct node * newnode=create();
    printf("enter data: ");
    scanf("%d",&(newnode->data));
    head=newnode;
    newnode->next=temp;
    printf("\n");
    
    return head;
    
    
    
}

void display(struct node * temp){
    printf("Linked list : ");
    printf("%d ",(temp->data));
    temp=temp->next;
    
while(temp!=NULL){
    printf(" -> %d ",(temp->data));
    temp=temp->next;
}
}

int main() {
    struct node * head=NULL;
    int c;
    while(1){
    printf("MAIN MENU\n-----------------\n1)INSERT AT BEGINNING\n2)DISPLAY\n3)EXIT\n\n");
    scanf("%d",&c);
    switch(c){
        case 1:head=beginsert(head);
                break;
        case 2:display(head);printf("\n");
        break;
        case 3:exit(0);
        
    }}
    return 0;
}
