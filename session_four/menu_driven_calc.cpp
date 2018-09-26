#include <iostream>
using namespace std;

int add( int num_one, int num_two );
int subtract( int num_one, int num_two );
int divide( int num_one, int num_two );
int multiply( int num_one, int num_two );
void print_menu();

int main(){
  int first_input;
  int second_input;
  int choice;

  cout << "Enter the first number --> ";
  cin >> first_input;
  cout << "Enter the second number --> ";
  cin >> second_input;
  cout << endl << "Which operation would you like to peform on "
       << first_input << " and " << second_input << " ? "
       << endl;
  print_menu();
  cin >> choice;

  switch ( choice ){
    case 1: cout << "Adding " << first_input << " and " << second_input << " is "
            << add( first_input, second_input ) << endl;
            break;
    case 2: cout << "Subtracting " << first_input << " and " << second_input << " is "
            << subtract( first_input, second_input ) << endl;
            break;
    case 3: cout << "Dividing " << first_input << " and " << second_input << " is "
            << divide( first_input, second_input ) << endl;
            break;
    case 4: cout << "Multiplying " << first_input << " and " << second_input << " is "
            << multiply( first_input, second_input ) << endl;
            break;
    //The rational here is that any input whether 5 or above will
    //cause the program to exit. Once there is no statement after the case
    //it will break at the next break statement
    case 5:
    default: break;
  }
  //These lines are meant for Linux users
  //it pauses the application so that we can see the output
  //cin.get();
  //cin.get();
  return 0;
} //end of main
/**
 * Prints the menu to the screen.
 */
void print_menu(){
    cout << endl << "Choose from the following options:" << endl << endl
         << "1. Add two numbers" << endl
         << "2. Subtract two numbers" << endl
         << "3. Divide two numbers" << endl
         << "4. Multiply two numbers" << endl
         << "5. Exit the application" << endl;
}
/**
 * Finds the sum of two numbers
 * @param  num_one
 * @param  num_two
 * @return sum The sum of two numbers
 */
int add ( int num_one, int num_two){
  return num_one + num_two;
}
/**
 * Finds the difference between two numbers
 * @param  num_one
 * @param  num_two
 * @return  The difference of two numbers
 */
int subtract ( int num_one, int num_two){
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
int divide ( int num_one, int num_two){
    return num_one / num_two;
}
/**
 * Finds the product of two numbers
 * @param  num_one
 * @param  num_two
 * @return         The product of two numbers
 */
int multiply ( int num_one, int num_two){
    return num_one * num_two;
}
