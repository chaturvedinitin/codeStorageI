void findTarget(int arr[], int n, int target) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}