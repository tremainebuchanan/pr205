#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Log{
    char file_name[8] = "log.txt";
    string message;
    public:
        Log(string log_message){
            message = log_message;
        };
        
        int save(){
            ofstream log_file(file_name, ios::app);
            if(!log_file.is_open()){
                return -1;
            }
            log_file << message;
            log_file.close();
            return 0;
        };

        void index(){
            ifstream stream;
            string message;
            stream.open("log.txt", ios::out);
            stream >> message;
            cout << message;
            cout << endl << "Starting reading from file";
            while(!stream.eof()){
                stream >> message;
                cout << message;
            }
            stream.close();
        }
};

int main(){
    //In order to open a file and append data to it, 
    //the ios::app flag must be passed to the constructor 
    // of the ofstream object as per below.
    ofstream file_handle("log.txt", ios::app);
    if(file_handle.is_open()){
        file_handle << "20180101 Userloggedin.\n";
        file_handle << "20180101 Userloggedin.\n";
        file_handle << "20180101 Userloggedin.\n";
        file_handle.close();
    }else{
        cout << "Unable to open log.txt";        
    }

    ifstream stream;
    string message;
    int date;
    stream.open("log.txt", ios::out);
    stream >> date >> message;
    //cout << message << endl;
    //cout << date << endl << "Starting reading from file";
    while (!stream.eof())
    {
        stream >> date >> message;
        cout << date << endl << message << endl;
    }
    stream.close();

    return 0;
}
