//Smallest no in array
#include<iostream>
using namespace std;


int main(){
    int arr[] = {2,8,3,5,7,4,8};
    int n = sizeof(arr) / sizeof(0);

    int min = INT_MAX;
    for(int i = 0; i < n; i++){

        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "smallest no in array is = " << min << endl;

}
