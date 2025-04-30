// convert binary number to Decimal number system

#include<iostream>
using namespace std;
//define a function to convert a binary number to a decimal number
int decimalNum(int binNum){
    int pow = 1; // 2^0 = 1
    int ans = 0;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += (rem * pow);

        binNum = binNum / 10;
        pow *= 2;

    }
    return ans;
}

int main(){
    int binNum = 110101;
    cout << decimalNum(binNum) << endl;
}
