#include <iostream>
using namespace std;
//Class Definition
class GradeAverage{
    float grade_one;
    float grade_two;
    float grade_three;
    float average;

    public:
        //Constructor function
        GradeAverage(){
            grade_one = 0;
            grade_two = 0;
            grade_three = 0;
            average = 0;
        };
        //Parameterized function
        GradeAverage( float g_one, float g_two, float g_three){
            grade_one = g_one;
            grade_two = g_two;
            grade_three = g_three;
        }
        /*
        * Finds the average of the three grades
        */
        void find_average(){
            average = (grade_one + grade_two + grade_three) / 3;
        }

        //Accessor method for average
        float get_average(){
            return average;
        }

        //Mutator Methods
        void set_grade_one( float g_one){
            grade_one = g_one;
        }

        void set_grade_two( float g_two){
            grade_two = g_two;
        }

        void set_grade_three(float g_three){
            grade_three = g_three;
        }

};
int main(){
    //Create an instance of the GradeAverage class
    float g_one;
    float g_two;
    float g_three;
    //Accepts input
    cin >> g_one;
    cin >> g_two;
    cin >> g_three;
    GradeAverage gradeaverage;
    gradeaverage.set_grade_one(g_one);
    gradeaverage.set_grade_two(g_two);
    gradeaverage.set_grade_three(g_three);
    gradeaverage.find_average();
    cout << "The average is " << gradeaverage.get_average();
    return 0;
}