/**
* A prime number is a number that is only divisible by 1 and
* itself. Examples of prime numbers are 2, 3, 5, 7, 11 and 13.
* Write a program to accept a number less than 40 and determine if
* this number is a prime number. Upon determination, kindly print
* the result to the console whether or not the number is a prime
* number
*
**/
#include <iostream>
using namespace std;

int main(){
  int input;
  int i;
  int factor_count = 0;
  cout << "Enter any number less than 40" << endl;
  cin >> input;
  if( input > 40){
    cout << "You have entered a value that greater than 40" << endl;
  }else{
    if( input == 2 ){
      cout << "The number entered is a prime number" << endl;
    }else{
      for( i = 1; i <= input; i++){
            if( input % i == 0){
              factor_count = factor_count + 1;
            }
      }
      if( factor_count > 2){
        cout << input << " is not a prime number. factor count is "
        << factor_count << endl;
      }else{
        cout << input << " is a prime number. factor count is " << factor_count << endl;
      }
    }
  }
  cin.get();
  cin.get();
  return 0;
}
