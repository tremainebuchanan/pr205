/**
 * @author Tremaine Buchanan
 */
#include <iostream>
//<fstream> header is required for file manipulation
#include <fstream>
//<string> header is required to handle strings within 
//the application
#include <string>
using namespace std;

class Log
{
    private:
        //Start of Private Member Variables
        //The log file name
        char file_name[8] = "log.txt";
        //The message to be stored.
        string message;
        //End of Private Member Variables
        /**
         * Adds the new line character to the 
         * end of the message.
         */
        void add_new_line(){
            //The plus operator concatenates the end line character
            //to the string.
            message = message + "\n";
        }

    public:
        //Default constructor
        Log(){};
        //Parameterized constructor
        Log(string log_message)
        {
            message = log_message;
        }; 
        /**
         * Opens the log file and appends the message to 
         * the end of the file.
         */
        int save()
        {
            //The ofstream class is used to open a file.
            //An object of this class must be instantiated
            //in order to manipulate a file.
            //Passing the ios::app flag to the constructor
            //opens the file and allows for an append operation to
            //take place.
            ofstream log_file(file_name, ios::app);
            //Each object of the class ofstream has certain 
            //functions built in. Once such function is the 
            //is_open() function. It determines if the file can be 
            //accessed. The return type of the is_open() function
            //is a boolean. In line 55, if the is_open() function
            //returns false, our save() function returns -1 indicating 
            //a failure. 
            if (!log_file.is_open())
            {
                return -1;
            }
            //If the file was successfully opened, we call the add_new_line()
            //function which adds the new line character to our string.
            add_new_line();
            //The message is now appended to the opened log.txt file.   
            log_file << message ;
            //The file is now closed for modification.
            log_file.close();
            //The function returns 0 to indicate success.
            return 0;
        };
        //Mutator method used to assign/change the value
        //of the message member variable.
        void set_message( string log_message ){
            message = log_message;
        }
};

int main()
{
    string message;
    //An instance of the Log class is created.
    //Whilst the class has two constructors,
    //the constructor without parameters will be called.
    Log log;
    cout << "Type your message" << endl;
    //The getline() function can be used to accept input.
    //Unlike cin, getline() accepts spaces that appear in input.
    getline(cin, message);       
    log.set_message(message);
    if (log.save() > -1)
        cout << "Log updated successfully" << endl;
    else
        cout << "An error occurred while saving to the log file" << endl; 
    return 0;
}
