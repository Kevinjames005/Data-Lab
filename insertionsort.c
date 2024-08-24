#include<stdio.h>

void main(){
	int n , i,j,time=0;
	time++;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	time++;
	time++;
	int a[n];
	time++;
	printf("Enter the elements of the array:\n");
	time++;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);\
		time++;
	}
	time=time+n+1;
	
	
	for(i=1;i<n;i++)
	{
	int temp=a[i];
	j=i-1;
	time++;time++;
	
	
	while(j>=0 && a[j] > temp)
	{
		a[j+1] = a[j];
		j--;
		time++;time++;
	}
	a[j+1]=temp;
	time++;
	
	}
	time=time+n+1;
	printf("Sorted array:");
	time++;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		time++;
	}
	printf("\nSpace complexity:%d",20+(4*n));
	printf("\ntime complexity:%d",time);
}
