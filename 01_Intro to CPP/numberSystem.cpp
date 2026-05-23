#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int binaryNo = 0;
    int i = 0;
    while (n > 0) {
        int bit = n % 2;
        binaryNo = bit*pow(10, i++) + binaryNo;
        n = n / 2;
    }
    return binaryNo;
}

// 2nd variation
int decimalToBinary2(int n){
    int binaryNo = 0;
    int i = 0;
    while(n > 0){
        int bit = (n & 1);
        binaryNo = bit*pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}

// Binary to Decimal
int binaryToDecimal(int n){
    int decimalNo = 0;
    int i = 0;
    while(n>0){
        int bit = n % 10;
        decimalNo = decimalNo + bit*pow(2, i++);
        n = n / 10;
    }
    return decimalNo;
}

int binaryToDecimal2(int n){
    int decimalNo = 0;
    int position = 0;

    while(n > 0){
        int digit = n % 10;

        if(digit != 0 && digit != 1){
            cout << "Invalid Binary Number!";
            return -1;
        }

        decimalNo += (digit << position);
        position++;
        n /= 10;
    }

    return decimalNo;
}

int main()
{
    cout<<"Enter The values : "<<endl;
    int a;
    cin>>a;
/*
    int binary = decimalToBinary(a);
    cout<<"Using Method 1: "<<binary<<endl;

    int binary2 = decimalToBinary2(a);
    cout<<"Using Method 2: "<<binary2<<endl;
*/
    int decimal = binaryToDecimal2(a);
    cout<<"Binary to Decimal: "<<decimal<<endl;

    return 0;
}