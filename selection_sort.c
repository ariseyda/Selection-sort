#include<stdio.h>

#define MAX 50

//Selection Sort
//The smallest number in the array is detected
//Sorts from small to large
//The numbers to the right of the min value are checked.
//If a number less than min is found, it is replaced with the min value.


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
		//I compare the values on the right side of j with j.
		//And if I find a value less than j, I swapp it with j.
		//The number of comparisons made with each step decreases.
		//Because the left side is sorted first and you continue to line up the numbers on the right side.
		
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

