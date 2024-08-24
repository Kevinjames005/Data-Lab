#include<stdio.h>

void main(){
	int l=0,n,x,a[100],flag=0,i,mid,t;
	t++;
	printf("Enter the number of elements in array:");
	t++;
	scanf("%d",&n);
	t++;
	int r=n-1;
	t++;
	for(i=0;i<n;i++){
		printf("Enter the a[%d] element:",i);
		scanf("%d",&a[i]);
		t++;
		t++;
		}
	printf("Enter the element that you want to find:");
	scanf("%d",&x);
	t++;
	t++;
	t++;
	while(l<=r){
	mid=(l+r)/2;
	t++;
	if(a[mid]==x)
	{
		flag=1;
		break;
	}
	
	else if(x>a[mid])
	{
		l=mid+1;	
	}
	
	else
	{
		r=mid-1;
	}
	
	}
	t++;
	t++;
	t++;
	t++;
	if(flag==1){
	printf("the element is found");
	t++;
	}
	
	else{
		printf("the element is not found");
		t++;
	}
	t++;
	t++;
	printf("\nTime complexity:%d",t);
	printf("\nSpace complexity:%d",32+(n*4));
	
	
	
}
