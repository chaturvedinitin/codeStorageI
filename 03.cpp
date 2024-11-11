#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//    ofstream file1("nitin.txt");
    ofstream file1, file2;
    file1.open("04.cpp");
    file2.open("satyam.txt");

    file1 << "this file belongs to Nitin" << endl << "this is second line";

    file1.close();
    file2.close();

    
}




    // if(file1.is_open()) cout << "file is open\n";
    // else cout << "file is close\n";

    // if(file1){
    //     cout << "no error\n";
    // }

    // if(!file1){
    //     cout << "error\n";
    // }