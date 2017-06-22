// C program to linear search an element in array recursively

#include <stdio.h>

int get_position(int a[],int size, int num){
	static int position;
	while(position < size)
		if(a[position] == num)
			return position;
		else
			position++;
			get_position(a,size,num);
}

int main(){
	int a[] = {4,7,2,6,3,7,9,43,12,23,76};
	int size = sizeof(a)/sizeof(a[0]);
	int num = 12; //Searching num in array a, hardcoded as only logic matters
	
	printf("Position of element in array is: %d\n",get_position(a,size,num));
	return 0;
}
