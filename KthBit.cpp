#include <iostream>

using namespace std;

bool KthBit(int number,int k){
    return ((number>>k)&1);
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number,k;
        cin>>number;
        cout<<"Enter the (kth) bit to check: ";
        cin>>k;
        cout<<"Result: "<<KthBit(number,k)<<endl;
        testCases--;
    }
}