#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void selection_sort();
int main()
{
	int size,m,i;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter array elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Your array is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	selection_sort(a,size);
	return 0;
}

void selection_sort(int b[],int x){
	int i,j,d;
	for(i=0;i<x-1;i++){
		for(j=i+1;j<x-1;j++){
			if(b[i]>b[j]){
				d=b[i];
				b[i]=b[j];
				b[j]=d;
			}
			
		}
	}
	printf("\nThe sorted array by selection sort:");
	for(i=0;i<x;i++){
		printf("%d ",b[i]);
	}
	
}

