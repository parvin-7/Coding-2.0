#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*temp,*tail,*newnode;

void createlist(int n){
int data,i;
head=NULL;
tail=0;
for(i=1;i<=n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of node %d: ",i);
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    
    if(head==0){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

     printf("Doubly Linked list created successfully \n ");
}
void delete_beg(){
    if(head==0){
        printf("%d",head->data);
    }
    else{
        temp=head;
        head=head->next;
        temp=temp->next;
        free(temp);
    }
}
void delete_end(){
    temp=tail;
    tail->prev->next=0;
    free(temp);
}
void delete_specified(int pos){
    int i=1;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    //temp=head;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);

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
 int data,n,ch,pos;
 scanf("%d",&n);
 createlist(n);
 showingnodes();
 while(1){
 printf("enter your choice:\n1.Delete from beg\n2.Delete from end\n3.Delete from specified\n");
 scanf("%d",&ch);

 switch(ch){
    case 1: 
    delete_beg();
    showingnodes();
    break;
    case 2:   
    delete_end();
    showingnodes();
    break;
    case 3:
    printf("Pls enter specified position: ");
    scanf("%d",&pos);
    delete_specified(pos);
    showingnodes();
    break;
    default:
    printf("Pls enter vaild input\n");
 }
 }
 return 0;       
}