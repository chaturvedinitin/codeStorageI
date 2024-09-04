// You are using GCC
#include<iostream>
using namespace std;

int binarySearch(int arr[], int sz, int key){
    int s = 0;
    int e = sz-1;

    int mid = s+ (e-s)/2;
    
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (s-e)/2;
    }
    return s;
}
int main(){
    int N;
    cin >> N;
    int arr[100];
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    int M;
    cin >> M;
    cout << binarySearch(arr,N,M);
}