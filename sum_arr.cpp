#include <iostream>
using namespace std;

void count_sum(int arr[], int size) {
    int i, j, k,count=0;
    for (i = 0; i < size - 2; i++) {
        for (j = i + 1; j < size - 1; j++) {
            for(k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] == arr[k]) {
                    cout<<"indexes are : "<<i<<" "<<j<<" "<<k;
                    return;
                }
            }
        }
    }
    
    cout << "no sequence...!";
    
}
    

int main() {
    int size;
    cout << "enter size of array " << endl;
    cin >> size;
    int arr[size];
    cout << "enter sorted integers " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    count_sum(arr, size);

    return 0;
}