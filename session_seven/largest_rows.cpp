#include <iostream>
using namespace std;

int main(){
	int numbers[5][3] = {
		{90, 24, 30},
		{4,30,200},
		{200,9,22},
		{8,84,25},
		{2,0,0}
	};
	int row = 5; 
	int col = 3;
	int largest_row_index = -1;
	int largest_sum = 0;
	int row_sum = 0;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			row_sum += numbers[i][j];
		}
		if(row_sum > largest_sum){
			largest_sum = row_sum;
			largest_row_index = i;
		}
	}
	//cout << largest_row_index;
	cout << largest_sum;
	return 0;
}
