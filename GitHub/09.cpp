#include<iostream>
using namespace std;
char toLower(char ch){
    if(ch>='a' && ch<='z') return ch;
    return ch - 'A' + 'a';
}
bool palindrome(char arr[], int size){
    int s = 0, e = size - 1;
    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char arr[100] = "nitin";

    cout << palindrome(arr, 5) << endl;

    cout << toLower('I') << endl;
    int a = 7;
    int* ptr = &a;
    cout << ptr << endl;
    cout << &a << endl;
}