#include<stdio.h>


void main(){
	int a[100],n,i,x,flag=0,count,time=0;
	time=time+1;
	printf("Enter the number of elements:");
	time=time+1;
	scanf("%d",&n);
	time=time+1;
	for(i=0;i<n;i++){
		printf("Enter the a[%d] element:",i);
		scanf("%d",&a[i]);
		}
		time+=2*n;
		time=time+n+1;
	printf("Enter the elements that you want to  find:");
	time=time+1;
	scanf("%d",&x);
	time=time+1;
	for(i=0;i<n;i++){
		if(a[i]==x){
			flag=1;
			break;
			}
			time=time+1;
		
		}
	time=time+(n+1);
	if(flag==1){
			printf("The element  %d is found at a[%d] location",x,i);
			}
	
	else{
		printf("The element %d is not found",x);
		}
		time=time+1;
		time=time+1;
		time=time+1;
		time=time+1;
		printf("\nSpace complexity:%d",count=(6*4)+(n*4));
		printf("\ntime complexity:%d",time);
		time=time+1;
	time=time+1;

}
