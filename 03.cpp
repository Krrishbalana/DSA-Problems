//pass by refrence
#include<iostream>
using namespace std;
void modify(int arr[],int n){

    for(int i = 0; i < n; i++){
        arr[i] *= 2;
    }
}


int main(){
    int arr[] = {1, 1, 1, 1, 1, 1, 1};
    int n = 7;
    cout << "original array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // calling function which modify array
    modify(arr , n);
    cout << "modified array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
