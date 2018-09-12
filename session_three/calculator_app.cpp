#include <iostream>
using namespace std;
/**
 * Function prototypes
*/
int addition ( int num_one, int num_two);
int subtraction ( int num_one, int num_two);
int division ( int num_one, int num_two);
int multiplication ( int num_one, int num_two);

int main() {
  int input_one;
  int input_two;
  char input;
  do {
    cout << "Enter the first number" << endl;
    cin >> input_one;
    cout << "Enter the second number" << endl;
    cin >> input_two;
    //print the results
    cout << "The addition of " << input_one << " and " << input_two << " is " << addition( input_one, input_two );
    cout << "The difference of " << input_one << " and " << input_two << " is " << substraction( input_one, input_two );
    cout << "The division of " << input_one << " and " << input_two << " is " << division( input_one, input_two );
    cout << "The product of " << input_one << " and " << input_two << " is " << multiplication( input_one, input_two );
    cout << "Do you want to continue? Enter 'y' to continue, 'n' to exit";
    cin >> input;
  } while(input == 'y');
  return 0;
}
/**
 * Finds the sum of two numbers
 * @param  num_one
 * @param  num_two
 * @return sum The sum of two numbers
 */
int addition ( int num_one, int num_two){
  return num_one + num_two;
}
/**
 * Finds the difference between two numbers
 * @param  num_one
 * @param  num_two
 * @return  The difference of two numbers
 */
int subtraction ( int num_one, int num_two){
  if( num_one > num_two ) return num_two - num_one;
  else{
    return num_two - num_one;
  }
}
/**
 * Find the quotient of two numbers
 * @param  num_one
 * @param  num_two
 * @return         The quotient of two numbers
 */
int division ( int num_one, int num_two){
    return num_one / num_two;
}
/**
 * [multiplication  description]
 * @param  num_one [description]
 * @param  num_two [description]
 * @return         [description]
 */
int multiplication ( int num_one, int num_two){
    return num_one * num_two;
}
