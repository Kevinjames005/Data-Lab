#include <stdio.h>
void main(){
	int r,c,i,j,k=1;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	
	int a[25][25], b[25][25];
	//scanning the matrix
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		 if (a[i][j]!=0){
		 b[k][0]= i;
		 b[k][1]= j;
		 b[k][2]= a[i][j];
		 k++;
		 }
		 
		}
	}
	b[0][0]=r;
	b[0][1]=c;
	b[0][2]=k-1;
	
	printf("The matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("row\t column\t value\n");
	for(i=0;i<k;i++){
	printf("%d\t %d \t %d\n",b[i][0],b[i][1],b[i][2]);
	}
	
	
}

