#include <iostream>
using namespace std;

int main() {
  int grade = 0;
  int grade_div_ten;
  char input;
  do {
    cout << "Enter a grade less than 100" << endl;
    cin >> grade;
    //The grade_div_ten variable would be required to limit the number
    //of case statements we write.
    // When we divide a number by 10, we remove one of the digits.
    // For example, if we divide 100 by 10, the result is 10, one digit less.
    // Another example, if we divide 99 by 10, the result is 9.9. But in C++,
    // when we divide an integer by another, the remainder is discarded.
    // Therefore, 99 divided by 10 in C++ is 9.
    //If we didn't divide the grade by 10,
    //we would have to write the case statement like this
    //
    //  switch (grade){
    //    case 100:
    //    case 99:
    //    case 98:
    //    case 97
    //    ......
    //  }
    grade_div_ten = grade  / 10;
    //Lets assume the grade structure was revised and now reflects
    //A - 80 and greater
    //B - 70 and greater but less than 80
    //C - 60 and greater but less than 70
    //D - 50 and greater but less than 60
    //E - any value less than 50
    switch ( grade_div_ten ){
      case 10:
      case 9:
      case 8: cout << "A" << endl; break;
      case 7: cout << "B" << endl; break;
      case 6: cout << "C" << endl; break;
      case 5: cout << "D" << endl; break;
      default: cout << "E" << endl;
    }
    cout << "Enter 'y' to continue, 'n' to exit" << endl;
    cin >> input;
    //cin.get();
    //cin.get();
  } while( input == 'y');
  return 0;
}
