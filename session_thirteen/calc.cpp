#include <iostream>

using namespace std;
//The slashes before the text refers to comments.
//These comments are ignored by the compiler.
//Start of Class Definition
class Calculator{
	//Start of private members 
	int num_one;
	int num_two;
	//End of private members
	
	public: //start of public members
	//default constructor definition
	Calculator(){
		num_one = 0;
		num_two = 0;
	}
	//parameterized constructor which accepts two integer parameters
	Calculator(int number_one, int number_two){
		num_one = number_one;
		num_two = number_two;
	}
	//Member function to add the values of member variables
	//num_one and num_two
	int add(){
		return num_one + num_two;
	}
	
	//Create the divide, mulitply and substraction functions
	
	void print(){
		cout << num_one << endl;
		cout << num_two << endl;
	}
	//Best practise to have the destructor in the class.
	//However it is not a requirement as it is automatically
	//created by the c++ environment once an object is instantiated.
	~Calculator(){}	
};//End of Class Definition
int main(){
	//int number;
	Calculator calculator(40, 20);//Instance of the class
	//calculator.print();
	//Print the result of each function of the calculator class
	cout << calculator.add()<<endl;
	//Calling the add function of the
	//calculator class in line 20.
	return 0;
}
