#include <iostream>
using namespace std;

int main(){
  int score;
  char input;
  do{
    cout << "Enter a number greater than 0 and less than 100." << endl;
    cin >> score;
    if( score >= 80 ) cout << "A" << endl;
    else if( score >= 70 ) cout << "B";
    else if( score >= 69 ) cout << "C";
    else if( score >= 59 ) cout << "D";
    else { cout << "E" << endl; }
    cout << "Enter y to continue, 'n' to exit" << endl;
    cin >> input;
  }while( input == 'y' );
  return 0;
}
