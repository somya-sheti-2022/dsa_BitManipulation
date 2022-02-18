#include <iostream>

using namespace std;

int swapOddEven(int number){
    int even=number&0xAAAAAAAA;
    int odd=number&0x55555555;
    odd=odd<<1;
    even=even>>1;
    return (odd|even);
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"Result: "<<swapOddEven(number)<<endl;
        testCases--;
    }
}