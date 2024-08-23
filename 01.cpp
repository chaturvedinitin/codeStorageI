#include<iostream>
using namespace std;
int main(){
    int age[5];
    int n = 5;
    for(int i = 0 ;i<n; i++){
        cin >> age[i];
    }
    
    for(int i = 0 ;i<n; i++){
        cout << age[i] << " x";
    }

}