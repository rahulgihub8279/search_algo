#include <iostream>
using namespace std;

int find_duplicate(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[left] == arr[mid] && arr[right] == arr[mid]) {
                return size;
            }
        if (arr[mid] == key) {
            
            if (arr[mid - 1] == key || arr[mid + 1] == key) {
                for (int i = left; i <= right; i++) {
                    if (arr[i] == key) {
                        count+=1;
                    }
                }
            }
            else{
                count+=1;
            }
            return count;

        } else if (arr[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}
int main() {
    int size, key, ans;
    cout << "enter size of array"<<endl;
    cin >> size;
    int arr[size];
    cout << "enter elements in accending order : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "enter key " << endl;
    cin >> key;

    ans = find_duplicate(arr, size, key);

    if (ans == -1) {
        cout << key << " not present..!" << endl;
    } else {
        cout << key << " repeat : " << ans << endl;
    }

    return 0;
}