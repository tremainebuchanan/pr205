#include <iostream>
using namespace std;

int main(){	
	int numbers[] {40, 25, 18, 3, 13, 90, 500, 84, 36, 79};
	int len = 10;
	for(int i = 0; i < len; i++){
		if(numbers[i] > largest){
			largest = numbers[i];
		}
	}
	cout << "The largest number in the array is " << largest << end; 
	return 0;
}

