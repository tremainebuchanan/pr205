#include <iostream>
using namespace std;

int main(){
  int score;
  cout << "Enter a number greater than 0 and less than 100" << endl;
  cin >> score;
  do{
    if( score >= 80 ) cout << "A" << endl;
    else if( score >= 70 ) cout << "B";
    else if( score >= 69 ) cout << "C";
    else if( score >= 59 ) cout << "D";
    else{ cout << "E" << endl; }
    cin >> score;
  }while( score > 0 && score <=100 );
  cin.get();
//cin.get(); -> This line is necessary for linux users
  return 0;
}
