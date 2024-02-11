#include <iostream>
using namespace std;

int lenear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
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

    cout << "enter key to search :" << endl;
    cin >> key;

    int ans = lenear_search(arr, size, key);
    if (ans == -1) {
        cout << key << " not found..!" << endl;
    } else {
        cout << key << " found at index " << ans << endl;
    }

    return 0;
}