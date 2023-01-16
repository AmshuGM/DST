#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *create_node() {
    struct node *temp; int data1;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&data1);
    temp->data=data1;
    temp->next=NULL;
    temp->prev=NULL;
    
    
    
}

void beginsert(struct node **head) {
    struct node *ptr,*temp;
    ptr=create_node();
    if(*head==NULL) {
        *head=ptr;
    }
    else {
    
    temp=*head;
    ptr->next=*head;
    ptr->prev=NULL;
    temp->prev=ptr;
    *head=ptr;
    
    }
}

void display(struct node *head) {
    struct node *ptr;
    ptr=head;
    if(ptr==NULL) {
        printf("\nEmpty Linked List");
    }
    else {
        printf("\nValues: ");
        while(ptr!=NULL) {
            printf(" %d ",ptr->data);
            ptr=ptr->next;
        }
    }
}

void delete_pos(struct node **head,int pos) {
    struct node *ptr, *temp;
    if(*head==NULL) {
        printf("List is Empty\n");
    }
    else if((*head)->next==NULL) {
        free(*head);
        *head=NULL;
    }
    else {
        ptr=*head;
        temp=*head;
        int n=pos;
        while(n!=1) {
            ptr=ptr->next;
            n--;
        }
        (ptr->prev)->next=ptr->next;
        (ptr->next)->prev=ptr->prev;
        free(ptr);
    }
}


void main() {
    struct node *head=NULL;
    while(1) {
        printf("MAIN MENU\n1.Insert Begenning\n2.Display\n3.Delete at given position\n4.exit\n\n");
        int c;
        scanf("%d",&c);
        
        if(c==1) {
            beginsert(&head);
            printf("\n");
        }
        else if(c==2) {
            display(head);
            printf("\n");
        }
        else if(c==3) {
            printf("enter the position: ");
            int pos1;
            scanf("%d",&pos1);
            delete_pos(&head,pos1);
            printf("\n");
        }
        else {
            printf("\n");
            break;
        }
        
    }
    
}
