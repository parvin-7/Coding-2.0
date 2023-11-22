#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*ptr,*ptr1,*newnode,*temp;
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
void display(){
    struct node *current = head;
    while(current!=NULL){
        printf("Data=%d\n",current->data);
        current=current->next;
    }

}
int main(){
    int data,n,p;
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    createlist(n);
    printf("Enter data & specified position: ");
   scanf("%d\t%d",&data,&p);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr1=head;
ptr->next=temp->next;
temp->next=ptr;
display();
return 0;
}