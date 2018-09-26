#include <iostream>

using namespace std;

int main(){
  int sum = 0;
  int count = 0;
  float average = 0;
  int number;
  int exit_condition = -1;

  while( exit_condition > 0){
    count++;
    sum = sum + number;
    average = sum / count;
    cout << "Enter a number";
    cin >> number;
  }
  cout << average;
  return 0;
}
