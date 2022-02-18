#include <iostream>

using namespace std;

bool PowerOfTwo(int number){
    return !(number&(number-1));
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"Result: "<<PowerOfTwo(number)<<endl;
        testCases--;
    }
}