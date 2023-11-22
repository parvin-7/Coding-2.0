#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*current,*newnode,*temp;
void createlist(int n){
    int data,i;
    head = (struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("Unable to allocate memory\n");
    }
    else{
        printf("Enter the data of node 1: ");
        scanf("%d",&data);
       head->data=data;
       head->next=NULL;
       temp=head;
       for(i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
        printf("Unable to allocate memory\n");
        break;
       }
       else{
        printf("Enter the data of node %d: ",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
       }
      
    }
     printf("Singly Linked list created successfully \n ");
}}
void Insertatend(int value){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
temp=head;
while(head->next!=NULL)
{
    head=head->next;
}
head->next=newnode;
}
void displaynodes(){
struct node *current = temp;
        printf("data in the list are:\n");
        while(current!=NULL)
        {
        printf("%d",current->data);
        current=current->next;
       }
    }
 

int main(){
    int n,value,i;
    printf("\n--------------------------------\n");
    printf("Enter the no. of nodes u want: ");
    scanf("%d",&n);
        printf("\n--------------------------------\n");
    createlist(n);
        printf("\n--------------------------------\n");
    printf("\nEnter value of new node U wanna insert at end: ");
    scanf("%d",&value);
    Insertatend(value);
        printf("\n--------------------------------\n");
       displaynodes();
  printf("\nEnd");
    return 0;
}