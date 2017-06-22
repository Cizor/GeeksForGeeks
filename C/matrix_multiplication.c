//C program for Matrix Multiplication

#include <stdio.h>

int multiplication_possibiltiy(int a[][], int b[][]){
	int i = 0, j = 0;
	//printf("Size of a: %lu\n", sizeof(&a)/sizeof(a[0]));
	for(i = 0; i < 4; i++){
		for(j = 0;j < 3;j++){
			printf("Member %d\n",a[i][j]);
		}
	}
	return 1;
}

int matrix_multiplication(int *a, int *b){
	
}

int main(){
	int a[4][3]= {{1,2,3},{4,5,6},{7,8,9},{10,20,30}};
	int b[4][3]= {{11,22,33},{44,55,66},{77,88,99},{100,200,300}};
	int i =0,j =0;

	for(i = 0; i < 4; i++){
		for(j = 0;j < 3;j++){
			printf("Member %d\n",a[i][j]);
		}
	}
	if(multiplication_possibiltiy([][],b[][])){
		//Multiplication here
		return 0;
	}else{
		printf("These matrices are not multiplicable as \
		number of columns in first matrix is not equal to no. of rows in second matrix\n");
	}

}
