#include<iostream>
using namespace std;
int firstOccur(int arr[], int size, int key){
    int s = 0;
    int e =  size-1;

    int mid = s+(e-s)/2;
    int index = -1;
    while(s<=e){
        if(arr[mid] == key){
            index = mid;
            e = mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return index;
}

int lastOccur(){
     int s = 0;
    int e =  size-1;

    int mid = s+(e-s)/2;
    int index = -1;
    while(s<=e){
        if(arr[mid] == key){
            index = mid;
            s=mid+1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return index;
}
int totalOccur(int arr[], int size, int key){
    return lastOccur(arr,size,key) - firstOccur(arr,size,key) ;
}
int main(){
    int arr[7] = {1,2,3,3,3,3,5};
    // int arr2[7] = {1,2,2,3,4,5,6};
    cout << "first occured at: "<< firstOccur(arr,7,3) << endl;
}