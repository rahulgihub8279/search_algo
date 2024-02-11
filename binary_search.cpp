#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key) {
    int st = 0;
    int end = size - 1;
    while(st<=end){
        int mid = st + (end - st) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    int size, key;
    cout << "enter size of array :" << endl;
    cin >> size;
    int arr[size];
    cout << "enter elements :" << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "enter element for search :" << endl;
    cin >> key;
    int ans = binary_search(arr, size, key);
    if (ans==-1) {
        cout << "elment not found....!" << endl;
    } else {
        cout << "elment found at index " << ans << endl;
    }

    return 0;
}