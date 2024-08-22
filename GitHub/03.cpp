#include<iostream>
using namespace std;
void swap(int &m, int &n){
    int temp = m;
    m = n;
    n = temp;
}
void reverse(int arr[], int size){
    int l = 0;
    int r = size -1;

    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
void prints(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5] = {4,1,11,9,-1};
    int size = 5;
    reverse(arr, size);
    prints(arr,size);
}