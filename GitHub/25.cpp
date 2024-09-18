#include<iostream>
using namespace std;
//head recursion
void head(int n){
    if(n==0) return;
    head(n-1);
    cout << n << " ";
}
// tail recursion
void tail(int n){
    if(n==0) return;
    cout << n << " ";
    head(n-1);
}

int power(int n, int e){
    if(e==0) return 1;
    return n * power(n,e-1);
}

void fib(int n){
    if(n==1) return 0;
    if(n == 2) return 1;
    return fib(n-1) + fib(n-2);
}
int main()
{
    cout << power(18,2);
}