#include<stdio.h>
#include<stdlib.h>

main(){
	int n,m,i;
	printf("enter array size");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("your array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	ss(a,n);
	
}
