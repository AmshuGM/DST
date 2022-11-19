#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 10


int front=-1,rear=-1;
int queue[size];


int IsFull(){
   if(rear==size-1)  return 1;
   return 0;




}


int IsEmpty() {
     if(front==-1 && rear==-1) return 1;
     return 0;

}

void Enqueue(int x){

     if(IsFull()) printf("The stack is full\n");
     else if(IsEmpty()){
		       front=0;
	  }
	  rear++;
	  queue[rear]=x;
}

void Dequeue(){

     // if(IsEmpty()) printf("The stacj is empty\n");
      if(front>=rear){front=-1;rear=-1;}
      if(!IsEmpty())
      rear--;



}

void main(){

    int casee;
    clrscr();
    while(1){
    printf("MAIN MENU\n-----------------------------\n1)ADD ELEMENT TO ARRAY\n");
    printf("2)DELETE ELEMENY  FROM ARRAY\n3)PRINT THE QUEUE\N\n4)EXIT\n ");
    printf("Enter the operation\n");
    scanf("%d",&casee);
    switch(casee){
    case 1:
    int x;
	printf("Enter element to add in the qeue\n");
	scanf("%d",&x);
	Enqueue(x);

	break;



    case 2:  Dequeue();
    break;
    case 3:
    printf("stack: ")    ;
	 for(int i=0;i<rear;i++){
	 printf("  %d",queue[i]);


	 }printf("\n");
	  break;
    case 4:
	 exit(0);





}          }       }