//C Program to linear search an element in array recursively without using static position variable

#include <stdio.h>

int get_position(int a[],int position, int size, int num){
	if(a[position] == num)
		return position;
	return get_position(a,position+1,size,num);
}

int main(){
	int a[] = {3,5,1,5,6,1,6,7,4,3,2,8,23,12,6,34,7,8,2};
	int size = sizeof(a)/sizeof(a[0]);
	int num = 34; //Element
	int start = 0; //Start index of array
	printf("Position of element in array is %d\n",get_position(a,start,size,num));
	return 0;
}
