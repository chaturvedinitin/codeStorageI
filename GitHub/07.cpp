#include<iostream>
using namespace std;
void func(int &n){
    n = 8;
    cout << n << endl;
}
int main(){
    int n;
    n = 7;
    func(n);
    cout << n << endl;
}