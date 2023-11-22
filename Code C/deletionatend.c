#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head,*ptr,*ptr1,*node2,*node3,*node4;
int Delete_last(){
    if(head==NULL){
        printf("Unable to allocate memory");
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(temp);
        return temp;
    }
}
void display(struct Node* head){
    
    printf("Linked List : ");
    
    // as linked list will end when Node is Null
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
int main(){
    int data;
    struct Node* head = NULL; 
    struct Node* node2 = NULL; 
    struct Node* node3 = NULL; 
    struct Node* node4 = NULL; 

    // allocate 3 nodes in the heap 
    head =  (struct Node*)malloc(sizeof(struct Node)); 
    node2 = (struct Node*)malloc(sizeof(struct Node)); 
    node3 = (struct Node*)malloc(sizeof(struct Node)); 
    node4 = (struct Node*)malloc(sizeof(struct Node)); 

   
    head->data = 10; // data set for head node 
    head->next = node2; // next pointer assigned to address of node2 

    node2->data = 20; 
    node2->next = node3; 

    node3->data = 30;
    node3->next = node4; 

    node4->data = 40;
    node4->next = NULL; 
   
Delete_last();
display(head);
return 0;
}