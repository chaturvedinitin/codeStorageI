#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream file1("nitin.txt");
    string line;

    if(!file1.is_open()){
        cout << "error opening the file" << endl;
        return 0;
    }

    while(getline(file1,line)){
        cout << line << ", ";
    }

    file1.close();

    return 0;
    
}