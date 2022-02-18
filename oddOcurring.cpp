#include <iostream>

using namespace std;

int oddOcurring(int array[],int number){
    int result=0;
    for(int count=0;count<number;count++){
        result=result^array[count];
    }return result;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number of numbers in array:";
        int number;
        cin>>number;
        cout<<"Enter the number one by one: ";
        int array[number];
        for(int count=0;count<number;count++)cin>>array[count];
        cout<<"Result: "<<oddOcurring(array,number)<<endl;
        testCases--;
    }
}