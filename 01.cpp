//largest no in array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,8,3,5,7,4,8};
    int n = (sizeof(arr)/ sizeof(0)) ;
    
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << "maximum no in the array is = " << max << endl;

}

