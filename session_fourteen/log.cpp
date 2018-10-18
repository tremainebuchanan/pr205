/**
 * @author Tremaine Buchanan
 */
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

class Log
{
    private:
        //The log file name
        char file_name[8] = "log.txt";
        //The message to be stored.
        string message;
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
            //opens the file 
            ofstream log_file(file_name, ios::app);
            if (!log_file.is_open())
            {
                return -1;
            }
            add_new_line();
            log_file << message ;
            log_file.close();
            return 0;
        };

        void set_message( string log_message ){
            message = log_message;
        }
};

int main()
{
    string message;
    Log log;
    cout << "Type your message" << endl;
    getline(cin, message);       
    log.set_message(message);
    if (log.save() > -1)
        cout << "Log updated successfully" << endl;
    else
        cout << "An error occurred while saving to the log file" << endl; 
    return 0;
}
