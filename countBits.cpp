#include <iostream>

using namespace std;

int countSetBits(int number){
    int res=0;
    while(number){
        res++;
        number=(number&(number-1));
    }
    return res;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"Result: "<<countSetBits(number)<<endl;
        testCases--;
    }
}