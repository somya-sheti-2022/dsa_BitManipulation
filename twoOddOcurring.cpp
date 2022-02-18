#include <iostream>

using namespace std;

void twoOddOcurring(int array[],int number){
    int result=0;
    for(int count=0;count<number;count++){
        result=result^array[count];
    }
    int rightMostSetBit=(result&(~(result-1)));
    int result1=0,result2=0;
    for(int count=0;count<number;count++){
        if((array[count]&rightMostSetBit))result1=(result1^array[count]);
        else result2=(result2^array[count]);
    }
    cout<<"Result: "<<result1<<" "<<result2<<endl;
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
        twoOddOcurring(array,number);
        testCases--;
    }
}