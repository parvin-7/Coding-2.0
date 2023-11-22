#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
}*head,*tail,*newnode,*nextnode,*temp;

void create_Dll(int n){
int data,i;
head=0;
for(i=1;i<=n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of node %d: ",i);
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
}
void insert_atbeg(){
    int data;
      
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter data for inserting at begining: ");
   scanf("%d",&newnode->data);
   if(head==0){
    newnode->next=0;
    head=newnode;
   }
   else{
    newnode->next=head;
    head->prev=newnode;
   newnode->prev=0;
   head=newnode;
   }
}
void insert_atend(){
    int data;
     newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter data for inserting at end: ");
   scanf("%d",&newnode->data);
   if(head==0){
    newnode->next=0;
    newnode->prev=0;
    head=newnode;
   }else{
   newnode->next=0;
   newnode->prev=temp;
   temp->next=newnode;
   temp=newnode;
   }
}
void insert_specified(int position){
    int i=1,data;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(position==0){
        printf("Invaild position");
    }
    else if(position==1){
        newnode->data=data;
        head=newnode;
    }
    else{
        temp=head;
        printf("Enter data for insertion at specified pos: ");
    scanf("%d",&newnode->data);
    while(i<position-1){
        temp=temp->next;
        i++;
    }
       newnode->prev=temp;
       newnode->next=temp->next;
       temp->next=newnode;
       
       newnode->next->prev=newnode;

    }
}
void showingnodes(){
    struct node *current = head;
   printf("Data in the list is:\n");
   if(head->next==NULL){
    printf("%d",head->data);
   }
   else{
     while(current!=NULL){
        printf("Data:%d\n",current->data);
        current=current->next;
    }
   }
    
}


int main(){
    int n,data,ch,position;
    printf("enter no.of nodes: ");
    scanf("%d",&n);
    create_Dll(n);
    showingnodes();
    while(1){
    printf("Enter dll insertion:\n1.Inserting at begining\n2.Inserting at end\n3.Inserting at specified pos:\n");
    scanf("%d",&ch);
    
    switch (ch)
    {
    case 1:
    insert_atbeg();
   showingnodes();
        break;
    case 2:
     insert_atend();
     showingnodes();
        break;
    case 3:
    printf("enter position for insertion: ");
    scanf("%d",&position);
     insert_specified(position);
     showingnodes();
     break;
    default:
    printf("Wrong choice\n");
        break;
    }}
    return 0;
}