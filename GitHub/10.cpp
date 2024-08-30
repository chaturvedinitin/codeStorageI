#include<iostream>
using namespace std;
int main(){
    // int n;
    // n = 8;
    // int * ptr = &n;
    // cout << n << endl;
    // cout << *ptr << endl;
    // cout << ptr << endl;
    // cout << &n << endl;
    int a =5;
    int* ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr = ptr +1;
    cout << ptr << endl;
    cout << *ptr;
}