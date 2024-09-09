#include<iostream>
using namespace std;
int main()
{
    // inputs
    int arr[3] = {-1,-2,-3};
    // int arr[7] = {-4, -2, 1, 5, -3, 7, -5};
    // int n = 7;
    int n=3;

    //kadane's algorithm
    int sum = 0;
    int max = INT_FAST8_MIN;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        if(sum>max){
            max = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    // print max
    cout << max;
    return 0;
}



// arr = -4, -2, 1, 5, -3, 7, -5
// maximum sub array sum
// -4 2 3 5 6 7 0
// 1 2 3 4 -1 0 -4