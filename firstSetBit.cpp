#include <iostream>

using namespace std;

int firstSetBit(int number){
    if(number==0)return 0;
    int result=1;
    while(!(number & (1<<(result-1)))){
        result++;
    }return result;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"Result: "<<firstSetBit(number)<<endl;
        testCases--;
    }
}