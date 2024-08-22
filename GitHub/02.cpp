#include<iostream>
using namespace std;
int search(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(element == arr[i]){
            return i;
        }
    }
    return -1;
}
bool Found(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(element == arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int element = 4;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout <<"the index is : " << search(arr,size,element)<< endl;
    cout << "1 for element found 0 for not found: " << Found(arr,size,element) << endl;

    if(Found(arr,size,element)){
        cout << element << "key is found " << endl;
    }else{
        cout << element << "key is not found" << endl;
    }
}