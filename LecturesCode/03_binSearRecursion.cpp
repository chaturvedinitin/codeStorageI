#include<iostream>
using namespace std;
bool binarySearch(int arr[],int size,int k) {
    if (size<=0) {
        return false;
    }
    int mid = size/2;
    if(arr[mid]==k){
        return true;
    } 
    else if(arr[mid] < k) {
        return binarySearch(arr+mid+1, size-mid-1, k);
    } 
    else{
        return binarySearch(arr,mid,k);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    if(binarySearch(arr, size, key)) {
        cout << key << " found in the array." << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}