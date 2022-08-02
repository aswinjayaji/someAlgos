s
#include<stdio.h>
#include<stdlib.h>
;
typedef struct node{
     int data;
     struct  node *next;
     
}node;

node *newnode(int data){
     node *temp=(node *)malloc(sizeof(struct node));
     if(temp!=NULL)
       {
     temp->data = data;
     temp->next = NULL;
       }
     return temp;
} 
int main(int argc, char **argv){
   int val=0;
   node *phead;
   node *ptr;
   do{
     if (val==0){
         scanf("%d",&val);
         phead=newnode(val);
         ptr=phead;
     }
      scanf("%d",&val);
      ptr->next=newnode(val);
      ptr=ptr->next; 
   }while(val!=404);
   ptr=phead;
   printf("\n");
   while (ptr->next!=NULL)
   {
    printf("%d->",ptr->data);
    ptr=ptr->next;
   }
     printf("\n");
}