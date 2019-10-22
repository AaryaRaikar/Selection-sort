#include<stdio.h>
#include<stdlib.h>


	

void ss(int A[],int N){
	int i,j,d;
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N-1;j++){
			if(A[i]>A[j]){
				d=A[i];
				A[i]=A[j];
				A[j]=d;
			}
			
		}
	}
	printf("\nthe sorted array by selection sort:");
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
	}
	
}


	

