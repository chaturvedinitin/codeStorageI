#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    int a, b;
    char ch;
    do{
        cin >> a >> b;
        m[a] = b;
        cin >> ch;
    }while(ch = 'y');

    
}