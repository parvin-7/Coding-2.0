#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*newnode,*temp,*tail;
void creating_cll(int n){
    int data;
    head=0;
    for(int i=1;i<=n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter your data no.%d: ",i);
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=0;

    if(head==0){
        head=temp=newnode;
    }
    else{
        
         temp->next=newnode;
         temp=newnode;
         
        }
        temp->next=head;
    } 
    }

    

void insert_beg(int data){
   
    newnode=(struct node*)malloc(sizeof(struct node));
    if(tail==0){
        newnode->data=data;
        tail=newnode;
        tail->next=newnode;
    }
    else{
        
        newnode->data=data;
        newnode->next=tail->next;
        tail->next=newnode;
    }
}
void showingcll(){
    struct node *current = head;
    if(head==0){
        printf("List is empty");
        
    }
    printf("Data in the circular linked list:\n");
    while(current->next!=head){
         
        printf("%d\n",current->data);
        current=current->next;
    }
    printf("%d",current->data); 
}
int main(){
    int n,data,ch;
    printf("Enter no.of nodes: ");
    scanf("%d",&n);
    creating_cll(n);
    showingcll();
    while(1){
    
    printf("\nPls enter your choice\n1.Insert from beg\n2.Insertion from end\n3.Insertion from specified\n");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        printf("enter your data: ");
        scanf("%d",data);
        insert_beg(data);
        showingcll();
        break;
       /* case 2:
        printf("enter your data: ");
        scanf("%d",data);
        insert_end(data);
        showingcll();
        break;
        case 3:
        printf("enter your data: ");
        scanf("%d",data);
        insert_specified(data);
        showingcll();
        break;
        default:
        printf("pls enter vaild input");
    }*/
    }
    
   return 0;

}}