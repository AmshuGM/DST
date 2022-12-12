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

void beginsert(struct node** head){
    
    struct node* temp=*head;
    struct node * newnode=create();
    printf("enter data: ");
    scanf("%d",&(newnode->data));
    *head=newnode;
    newnode->next=temp;
    printf("\n");
    
   
}

void middleinsert(struct node** head,int i){
    
    struct node* temp=*head;
    int choice;
    if(*head==NULL){
    printf("linked list is empty\nDo you want to create a linked list?(1:yes,0:no):");
    scanf("%d",&choice);
    printf("\n");
    }
    else{
    printf("enter the position :");scanf("%d",&i);
    if(choice==0)printf("cannot add at 0\n");
    else if(choice==1){
       beginsert(head);
        
    }
    
   else if(i==1){printf("inserting at the beginning...\n");beginsert(head);}
    else{
    i-=2;
    while(i--){
        temp=temp->next;
        
    }
    struct node *hold=temp->next;
    temp->next=create();
     temp=temp->next;
    printf("enter data: ");
    scanf("%d",&(temp->data));
   
    temp->next=hold;
    
    }}
    
}

void endinsert(struct node ** head){
    
    struct node* temp=*head;
    if(temp==NULL){printf("liked list is empty so element will be added at the beginning\n");
        beginsert(head);
    }
    else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=create();
    temp=temp->next;
    temp->next=NULL;
    printf("enter data: ");
    scanf("%d",&(temp->data));
    
}
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
    int i;
    while(1){
    printf("MAIN MENU\n-----------------\n1)INSERT AT BEGINNING\n2)INSERT AT THE MIDDLE\n3)INSERT AT THE END\n4)DISPLAY\n5)EXIT\n\n");
    scanf("%d",&c);
    switch(c){
        case 1:beginsert(&head);
                break;
        case 2:middleinsert(&head,i);break;
        case 3:endinsert(&head);break;
        case 4:display(head);printf("\n");
        break;
        case 5:exit(0);
        
    }}
    return 0;
}
