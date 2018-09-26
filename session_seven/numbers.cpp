#include <iostream>
using namespace std;

int main(){
		int numbers[4][3] {
			{25, 30, 40},
			{45, 30, 200},
			{200, 100, 222},
			{80, 90, 25}
		};
		int row = 4; 
		int col = 3;
		for(int i = 0; i < row; i++){
				for( int j=0; j < col; j++){
					cout << "Value of I " << i << endl;
					cout << "Value of J " << j <<endl;
					cout << "Iteration number " << i+1;
				}
		}
		return 0;
}
