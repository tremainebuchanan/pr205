#include <iostream>
#include <cstring>
using namespace std;

int main(){
	//Input
	char password_one[80];
	char password_two[80];
	int len_one;
	int len_two;
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

	if(len_one > 6 && len_two > 6){
		cout << "Password length is greater than 6 characters" << endl;
	}else{
		cout << "Password length is less than 6 characters" << endl;
	}
	return 0;
}

//

