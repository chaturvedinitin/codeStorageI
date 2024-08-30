#include<bits/stdc++.h>
using namespace std;

void spiral(int arr[][1], int row, int col){
    // top bot right left
    int top = 0;
    int right = col-1;
    int bot = row-1;
    int left = 0;

    // for top row
    for(int i = top; i<right; i++){
        cout << arr[top][i];
    }
    top++;
    // for right col
    for(int i = top; i<bot; n)

}
void SuperWave(int arr[][MAX_COL], int row, int col) {
    for (int i = 0; i < col; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < row; j++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int j = row - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int maxim(int arr[][4], int row, int col){
    int maxSum = INT_MIN;
    int index = -1;
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];
        }
        if(sum>maxSum){
            maxSum = sum;
            index = i;
        }
    }
    cout << "max sum is " << maxSum << endl;
    return index+1;
}
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout << maxim(arr,3,4) << endl;
}