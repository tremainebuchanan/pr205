#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    int number = 123;
    string converted_int; //a variable to store the converted integer
    stringstream string_handler; //an object of the stringstream class
    string_handler << number; //assigning the integer to the stringstream object 
    converted_int = string_handler.str(); //converts the number to a string
    cout << converted_int; //prints the number which should be a string
    return 0; 
}