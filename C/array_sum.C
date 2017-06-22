/*C program to find sum of elements in a given array */

#include <stdio.h>

int sum_array(int a[], int size){
	int result = 0,i = 0;
	for( i = 0; i < size; i++){
		result += a[i];
	}
	return result;
}

int main(){
	int a[] = {4,8,2};
	int size = sizeof(a) / sizeof(a[0]);
	printf("Size of elements in array is: %d\n",sum_array(a,size));
	return 0;
}
