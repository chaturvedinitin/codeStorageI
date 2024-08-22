#include<iostream>
#include<limits.h>
using namespace std;
int getMin(int arr[], int size){
    
    int min = INT_MAX;
    

    for(int i = 0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5] = {4,1,11,9,-1};

    cout << "Min element "<< getMin(arr,5) << endl;
    cout << "Max element "<< getMax(arr,5) << endl;
}