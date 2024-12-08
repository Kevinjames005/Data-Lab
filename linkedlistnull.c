#include<stdio.h>
#include<stdlib.h>

void main(){
    struct node{
        int data;
        struct node *link;
    };
    struct node *head , *newnode, * temp;
    head = NULL;
    int choice=1;
    while(choice==1){
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->link = NULL;

        if(head == NULL){
        head = temp= newnode;
        }
        else{
            temp->link=newnode;
            temp= newnode;
        }
        printf("do you want to continue?(0,1)");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!= NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }


}

