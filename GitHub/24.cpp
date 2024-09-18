#include<iostream>
using namespace std;

int main()
{
    int n=6;
    int* ptr = new int[n];    
    *ptr = 1;
    cout << *ptr;
}