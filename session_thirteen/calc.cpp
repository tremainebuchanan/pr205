//Author: Tremaine Buchanan
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
	//Find the difference between two numbers
	int subtract(){
		return num_one - num_two;
	}
	//Divides two numbers and returns the quotient
	int divide(){
		return num_one / num_two;
	}
	//Multiplies two numbers and returns the product
	int mulitply(){
		return num_one * num_two;
	}	

	//Accessor function - this is used to get return the value of a private
	//member of the Calculator class
	int get_num_one(){
		return num_one;
	}

	int get_num_two(){
		return num_two;
	}
	//Best practise to have the destructor in the class.
	//However it is not a requirement as it is automatically
	//created by the c++ environment once an object is instantiated.
	~Calculator(){}	
};//End of Class Definition
int main(){
	Calculator calculator(40, 20);//Instance of the class
	cout << "The sum of " << calculator.get_num_one() << " and " << calculator.get_num_two() 
	<< " is " << calculator.add() << endl;
	cout << "The difference between " << calculator.get_num_one() << " and " << calculator.get_num_two()
		 << " is " << calculator.subtract() << endl;
	cout << "The product of " << calculator.get_num_one() << " and " << calculator.get_num_two()
		 << " is " << calculator.mulitply() << endl;
	cout << "The quotient of " << calculator.get_num_one() << " and " << calculator.get_num_two()
		 << " is " << calculator.divide() << endl;
	return 0;
}
