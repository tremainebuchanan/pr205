/**
 * @author Tremaine Buchanan
 */
#include <iostream>
using namespace std;

//get_letter_grade function prototype
char get_letter_grade( int grade );

int main() {
  int grade = 0;
  int grade_div_ten;
  char input;
  char letter_grade;
  do {
    cout << "Enter a grade less than 100" << endl;
    cin >> grade;
    letter_grade = get_letter_grade( grade );
    cout << "The letter grade for grade " << grade << " is " << letter_grade << endl;
    cout << "Enter 'y' to continue, 'n' to exit" << endl;
    cin >> input;
    //cin.get();
    //cin.get();
  } while( input == 'y');
  return 0;
}
/**
 * Determines the letter grade for a given grade/score
 * @param  grade The value of the grade
 * @return  letter_grade The letter for a given grade
 */
char get_letter_grade( int grade ){
  int grade_div_ten = grade  / 10;
  char letter_grade;
  switch ( grade_div_ten ){
    case 10:
    case 9:
    case 8: letter_grade = 'A'; break;
    case 7: letter_grade = 'B'; break;
    case 6: letter_grade = 'C' break;
    case 5: letter_grade = 'D' break;
    default: letter_grade = 'E';
  }
  return letter_grade;
}
