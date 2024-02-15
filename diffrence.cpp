#include <iostream>
using namespace std;

int count_diffrence(int arr[], int size,int key) {
    int i, j,count=0;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] - arr[j] == key) {
                    count+=1;
            }
        }
    }
    if(count==0){
    return -1;}
    else{
        return count;
    }
}
    

int main() {

    int size,key,ans;
    cout << "enter size of array " << endl;
    cin >> size;
    int arr[size];
    cout << "enter sorted integers " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout<<"enter key "<<endl;
    cin>>key;

    ans=count_diffrence(arr, size,key);
    if(ans==-1){
        cout<<"no pair..!"<<endl;
    }
    else{
        cout<<"pair : "<<ans<<endl;
    }

    return 0;
}