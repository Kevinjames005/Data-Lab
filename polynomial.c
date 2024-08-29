#include<stdio.h>

struct polynomial{
	int coeff;
	int exp;
}a[100],b[100],c[100];

void main(){
	int i=0,j=0,n,k;
	printf("Enter the number of terms in the polynomial:");
	scanf("%d",&n);
	printf("Enter the coefficient and exponents of each term of the polynomial.\nHint:Enter the terms in descending order.\n ");
	for(i=0;i<n;i++){
		printf("coefficient %d:",i);
		scanf("%d",&a[i].coeff);
		printf("exponents %d:",i);
		scanf("%d",&a[i].exp);
	}
	for(i=0;i<n;i++){
		if(i<n-1){
			printf("(%dx^%d) +",a[i].coeff,a[i].exp);
		}
		else{
			printf("(%dx^%d)",a[i].coeff,a[i].exp);
		}
	}
	
	
}
