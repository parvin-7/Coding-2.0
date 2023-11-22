#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*head,*ptr,*ptr1;

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


}