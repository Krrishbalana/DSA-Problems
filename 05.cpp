//reverse an array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int st = 0;
    int end = n-1;
    while (st < end){
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }

    cout << "reverse array = " ;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
