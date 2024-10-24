#include<stdio.h>
#include<stdlib.h>

struct node{
	int coef;
	int exp;
	struct node*link;
};



void main(){
struct node *pptr , *qptr,*rptr , *head1 , *head2 , *newnode;
pptr = qptr = rptr = NULL;
int element1 , element2 ,i;
	printf("Enter the number of expressions in the polynomial");
	scanf("%d",&element1 );
	
	for(i=0;i<element1;i++){
		newnode = (struct node*) malloc(sizeof(struct node));
		printf("Enter the %d elements coefficient=",i+1);
		scanf("%d",&newnode->coef);
		printf("Enter the exponent of the coefficient:");
		scanf("%d" ,&newnode->exp);
		newnode->link=NULL;
		
		if(head1==NULL){
			head1 = pptr = newnode;
		}
		else{
			pptr->link = newnode;
			pptr=newnode;
		}
	}
	pptr = head1;;
	while(pptr->link != NULL){
	if()
		printf("%dx^%d+",pptr->coef , pptr->exp);
		pptr = pptr->link;
	}
}
