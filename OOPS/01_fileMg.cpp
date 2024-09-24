#include<iostream>
#include<fstream>
using namespace std;

int main()
{   
    // writing in a file
    fstream file("test1.txt", ios::out);

    if(file){
        file << "testing with line 1" << endl;
        file.close();
    }
    else{
        cout << "Error in opening file" << endl;
        return -1;
    }

    // reading file
    string line;

    file.open("test1.txt", ios::in);
    if(file){
        while(getline(file, line)){
            cout << "read: " << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Error in file opening" << endl;
        return -1;
    }

    // appending
    file.open("test1.txt", ios::app);
    if(file){
        file << "testing with line 2" << endl;
        file.close();
    }
    else{
        cout << "Error in opening file" << endl;
        return -1;
    }

    file.open("test1.txt", ios::in);
    if(file){
        while(getline(file, line)){
            cout << "read: " << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Error in file opening" << endl;
        return -1;
    }
}
