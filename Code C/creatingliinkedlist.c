#include<stdio.h>
#include<stdlib.h>
//representing a node of singly linked list
struct node{
    int data;
    struct node *next;
};
//representing the head and tail of the sll
struct node *head,*tail=NULL;
   
 void addnode(int data)  {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

     if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newnode;  
        tail = newnode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newnode;  
        //newNode will become new tail of the list  
        tail = newnode;  
    }  
 }
 void display(){
    
    struct node *current=head;

    if(head==NULL){
        printf("List is empty");
    }
    else{
        printf("data in the list are:\n");
        while(current!=NULL)
        {
        printf("%d",current->data);
        current=current->next;
       }
    }
 }
 int main(){
   int data,i,n=4;
   for(i=1;i<=n;i++){

   printf("enter data: %d\n",i);
   scanf("%d",&data);
  
    
    addnode(data);

   }
    display();
    
    return 0;
 }

