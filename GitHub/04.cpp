#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            s=mid+1;
        }
        if(key < arr[mid]){
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    int arr[5] = {2,3,7,9,12};
    cout << "Index of 12 is: " << binarySearch(arr,5,12) << endl;
}