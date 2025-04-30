//Linear search in array    

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 3, 6, 8, 7, 9, 2, 4, 5};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << i << endl;
            break;
        }
    }

}
