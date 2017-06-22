//Program to find largest element in array

#include <stdio.h>

int largest_elem(int a[],int size){
	int result = 0, i = 0;
	for(i = 0;i < size; i++){
		if(a[i] > result){
			result = a[i];
		}
	}
	return result;
}

int main(){
	int a[] = {2,6,3,7,1};
	int size = sizeof(a)/sizeof(a[0]);
	printf("Largest element in array is: %d\n",largest_elem(a,size));
	return 0;
}

