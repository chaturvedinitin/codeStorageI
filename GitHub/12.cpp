#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
    for(int i = 0; i<size-1; ++i){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}