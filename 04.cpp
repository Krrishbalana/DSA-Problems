//second largest no in array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,9,3,5,6,4,9};
    int n = (sizeof(arr)/ sizeof(arr[0])) ;

    int max = INT_MIN;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            ans = max;
            max = arr[i];
        }
        else if(arr[i] > ans && arr[i] < max){
            ans = arr[i];
        }
    }

    cout << "second largest no is = " << ans << endl;
}
