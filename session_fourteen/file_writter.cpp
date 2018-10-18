#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Log{
    char file_name[8] = "log.txt";
    char message[];
    public:
        Log(char log_message[]){
            strcpy(message, log_message);
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
};

int main(){
    //In order to open a file and append data to it, 
    //the ios::app flag must be passed to the constructor 
    // of the ofstream object as per below.
    ofstream file_handle("log.txt", ios::app);
    if(file_handle.is_open()){
        file_handle << "2018-01-01 - User logged in.\n";
        file_handle.close();
    }else{
        cout << "Unable to open log.txt";        
    } 
    
    return 0;
}
