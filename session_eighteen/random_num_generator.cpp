#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//The below snippet is used to generate a random number
//The srand function must be seeded in order to produce 
//truly random numbers. It is seeded with the current 
//time of the machine running the program.
int main(){
    
    srand(time(0));
    int random = rand();
    cout << "Random number = " << random << endl;
    return 0;
}
