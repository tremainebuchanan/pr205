#include <iostream>
#include <cstring>
using namespace std;

int main(){
	//Input
	char password_one[80];
	char password_two[80];
	int len_one;
	int len_two;
	
	//Add code to tell the user to enter password, then password again
	//to confirm
	cin >> password_one;
	cin >> password_two;

	//Process
	len_one = strlen(password_one);
	len_two = strlen(password_two);

	
	if(strcmp(password_one, password_two) == 0){
		cout << "Passwords match" << endl;
	}else{
		cout << "Passwords do not match" << endl;
	}

	if(len_one >= 6 && len_two >= 6){
		cout << "Values greater than or equal to six" << endl;
	}else{
		cout << "Values less than six" << endl;
	}
	return 0;
}

//

