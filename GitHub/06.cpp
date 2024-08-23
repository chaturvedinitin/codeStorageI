void swap(int &m, int &n){
    int temp = m;
    m = n;
    n = temp;
}
void selSort(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0; i<size; i++){
        cout << arr[i] << endl;
    }
}