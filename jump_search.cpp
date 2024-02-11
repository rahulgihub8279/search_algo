#include <iostream>
#include <math.h>
using namespace std;

int jump_search(int arr[], int key, int size)
{
    int st = 0;
    int step = sqrt(size);
    int end;
    while (st < size) {
        end = step;
        if (arr[st] == key) {
            return st;
        } else if (arr[end] < key) {
            st = end;
            step += sqrt(size);
        } else {
            int low = st;
            int high = end;

            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == key) {
                    return mid;
                } else if (arr[mid] < key) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return -1;
        }
    }
    return -1;
}

int main()
{
    int size, key;
    int arr[] = { 1, 2, 5, 6, 9, 10, 23, 56, 89, 99, 100, 101, 105, 200 };
    size = sizeof(arr) / sizeof(arr[0]);
    key = 1002;

    int ans = jump_search(arr, key, size);

    if (ans == -1) {
        cout << key << " not found...!" << endl;
    } else {
        cout << key << " found at index " << ans << endl;
    }

    return 0;
}