#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int k) {
    int s = 0;
    int e = size - 1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;  // Calculate mid in each iteration
        
        if (arr[mid] == k) {
            return mid;
        }
        if (k < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    
    return -1;  // Element not found
}

int main() {
    int n, d;
    cin >> n;
    int arr[100];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> d;
    
    int ans = binarySearch(arr, n, d);
    
    if (ans == -1) {
        cout << "Element " << d << " is not present" << endl;
    } else {
        cout << "Element " << d << " is present at index " << ans << endl;
    }
    
    return 0;
}
