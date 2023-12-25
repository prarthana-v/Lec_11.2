//Write a Program to find the reverse of a 1D array using a Pointers.
#include<stdio.h>
main(){
	int n,i;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		ptr[i]=&a[i];
		
	}
	
	printf("Reversed array elements:");
	for(i=n-1;i>=0;i--){
		printf("%d ",*ptr[i]);
	}
}
