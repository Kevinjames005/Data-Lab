#include<stdio.h>
void main() {
	int n,i,j,temp, time=0;
	time++;
	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	time++;time++;
	int a[n];
	time++;
	printf("Enter the elements of array:\n");
	time++;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		time++;time++;
	}
	time=time+n+1;
	
	for(i=0;i<n-1;i++){
		int min=i;
		time++;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j])
			{
				min=j;
				
			}
		
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
	}
	
	
	} 
	time=time+n+1;
	printf("The sorted element is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
		time++;
	}
	time=time+n+1;
	printf("\nSpace complexity:%d",20+(4*n));
	printf("\ntime complexity:%d",time);
}
		
