//C program for Matrix Multiplication

#include <stdio.h>
#include <stdlib.h> //For malloc

#define PRINT_MATRIX_VALUES 0


void matrix_multiplication(int *first[],int *second[],int fRows,int fColumns,int sRows,int sColumns){
	int i = 0,j =0,k=0,l=0;
	int sum = 0;
	int temp[fColumns];
	
	if(fColumns == sRows){   //For multiplication viabilit
		for(k=0;k<fRows;k++){
			temp[fColumns] = 0;
			for(l = 0;l < fColumns;l++){
				temp[l] = first[k][l];
			}
			for(i=0;i<sRows;i++){
					sum = 0;
					for(j=0;j<sColumns;j++){
						sum+=temp[j]*second[j][i];
					}
					printf("Result Matrix Cell Values [%d,%d] : %d\n",k+1,i+1,sum);
			}
		}
	}else{
		printf("\nMatrix Multiplication is not viable as number of columns in first matrix is not equal to number of rows in second matrix\n");
	}
}

void print_matrix(int *matrix[],int rows, int columns){
	int i = 0;
	int j = 0;
	//Printing matrix
	for(i = 0;i < rows;i++){
		for(j = 0;j < columns; j++){
			printf("Element: %d\n",matrix[i][j]);
		}
	}
}

int main(){
	//Hardcoding row and column nos. in both matrices rather than taking from user, as logic matters
	int first_rows = 3;
	int first_columns = 3;
	int second_rows = 3;
	int second_columns = 3;

	//counters
	int i = 0;
	int j = 0;
	int count_first = 0;
	int count_second = 10;

	int *a[first_rows]; //FIRST Matrix
	int *b[second_rows]; //SECOND Matrix
	//Memory Allocation
	for(i = 0; i < first_rows; i++){
		a[i] = (int*)malloc(first_columns * sizeof(int));
	}
	for(i = 0; i < second_rows; i++){
		b[i] = (int*)malloc(second_columns * sizeof(int));
	}

	//Assigning linear values (Hardcoded as only logic matters)
	for(i = 0;i < first_rows;i++){
		for(j = 0;j < first_columns; j++){
			a[i][j] = count_first++;
		}
	}

	for(i = 0;i < second_rows;i++){
		for(j = 0;j < second_columns; j++){
			b[i][j] = count_second++;
		}
	}
#if PRINT_MATRIX_VALUES
	print_matrix(a,first_rows,first_columns);
	print_matrix(b,second_rows,second_columns);
#endif
	matrix_multiplication(a,b,first_rows,first_columns,second_rows,second_columns);
	
	//Memory deallocation
	for(i = 0; i < first_rows; i++){
		free(a[i]);
	}
	for(i = 0; i < second_rows; i++){
		free(b[i]);
	}
}
