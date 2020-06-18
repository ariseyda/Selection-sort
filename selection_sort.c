#include<stdio.h>

#define MAX 50

//Selection Sort

int main(){
	
	int i,k,m,j;
	int array[MAX];
	int size;
	int minimum;
	
	printf("Please enter size of array:");
	scanf("%d",&size);
	
	printf("Please enter integers of array:");
	for(k=0;k<size;k++){
		scanf("%d",&array[k]);
	  }
	  
	for(j=0;j<size;j++){
		
		minimum=array[j];
		
		for(i=j+1;i<size;i++){
			
			if(array[i]<minimum){
				
				minimum=array[i];
			}
		}
		
		int temp=array[i];
		array[i]=array[minimum];
		array[minimum]=temp;
	}  
	
	printf("\nSelection sort:");
	
    for(m=0;m<size;m++){
    	printf("%d ",array[m]);
    }
 
	return 0;
}

