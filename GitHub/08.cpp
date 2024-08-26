#include<iostream>
using namespace std;
void func(int n){
    if(n==0) cout << 0<< " ";
    else{
    func(n-1);
    cout << n << " ";
    }
}
int main(){
    func(5);
}