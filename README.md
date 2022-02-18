
# DSA - Bit Manipulation    

Bit Manipulation is one of the important conecpts and in this repo we have solved some of the most common question from the topic.

#### So lets get started

### Bitwise Operators

We gonna deal with **6 main bitwise operators**

**1: And (&)** => does AND on every bit of the two numbers provided. The result of AND is **1 only if both bits are 1.**

**2: Or (|)** => does OR on every bit of the two numbers provided. The result of OR is **0 only if both bits are 0.**

**3: Xor (^)** => does XOR on every bit of the two numbers provided. The result of OR is **0 only if both bits are same (eg : 1^1 && 0^0).**

**4: Not (~)** => takes one number and **negate all the bits**

**5: Left Shift (<<)** =>   **left shifts the bits of the first operand**, the **second operand decides the number of places to shift**. 

**5: Right Shift (>>)** =>   **right shifts the bits of the first operand**, the **second operand decides the number of places to shift**. 

## Most Common Questions

### Question1 
**Check if Kth bit is set or not**

#### Example test cases
| Input(n,k) | Output     |
| :-------- | :------- |
| 5,1  | false |
| 7,1 | true |
| 2,1  | true |

#### Main Logic

```cpp

bool KthBit(int number,int k){
    return ((number>>k)&1);
}
```

#### Time Complexity : O(Log(number)) 

[Complete Code Link](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/KthBit.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/images/question1.PNG)

### Question2
**Count the number of set bits in a number**

#### Example test cases
| Input(n) | Output     |
| :-------- | :------- |
| 5  | 2 |
| 7 | 3 |
| 2  | 1|

#### Main Logic

```cpp
int countSetBits(int number){
    int res=0;
    while(number!=0){
        if((number&1)!=0)res++;
        number=number>>1;
    }
    return res;
}
```

**Time Complexity : O(Log(number))**
(As it checks for all the bits in number)

We can **Optimize** this further using **Brian Kernighan’s Algorithm** 

### Brian Kernighan’s Algorithm

According to this Algorithm **if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit.**

If we use this for our question we will **run the loop only for set number of bits**

#### Logic

```cpp
int countSetBits(int number){
    int res=0;
    while(number){
        res++;
        number=(number&(number-1));
    }
    return res;
}
```

**Time Complexity : O(d)**
(d: number of set bits in number)

[Complete Code Link](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/countBits.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/images/question2.PNG)

### Question3
**Check if a number is power of 2**

#### Example test cases
| Input(n) | Output     |
| :-------- | :------- |
| 4  | true |
| 13 | false |
| 64  | true |

#### Main Logic
We use the concept of **Brian Kernighan’s Algorithm** to solve the problem in the optimised way. The idea is **any number which is power of 2 has only 1 set bit so n&(n-1) should result to true if n is power of 2**

```cpp
bool PowerOfTwo(int number){
    return !(number&(number-1));
}
```

**Time Complexity : O(1)**

[Complete Code Link](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/powerOfTwo.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/images/question3.PNG)


### Question4
**First set bit from left**

#### Example test cases
| Input(n) | Output     |
| :-------- | :------- |
| 7 (111) | 1 |
| 18 (10010) | 2 |
| 12 (1100)| 3 |

#### Main Logic

```cpp
int firstSetBit(int number){
    if(number==0)return 0;
    int result=1;
    while(!(number & (1<<(result-1)))){
        result++;
    }return result;
}
```

**Time Complexity : O(logN)**

[Complete Code Link](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/firstSetBit.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/images/question4.PNG)

### Question5
**Swap all odd and even bits**

#### Example test cases
| Input(n) | Output     |
| :-------- | :------- |
| 23 (00010111) | 43 (00101011) |
| 2 (10) | 1 (01) |
| 7 (0111)| 11 (1011)|

#### Main Logic

We actually use **0xAAAAAAAA** (32 bit number with all even set bits) and
**0x55555555** (32 bit number with all odd set bits)

```cpp
int swapOddEven(int number){
    int even=number&0xAAAAAAAA;
    int odd=number&0x55555555;
    odd=odd<<1;
    even=even>>1;
    return (odd|even);
}
```

**Time Complexity : O(1)**

[Complete Code Link](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/swapOddandEven.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/images/question5.PNG)

### Question6
**Find only the odd occuring**

#### Example test cases
| Input(n) | Output     |
| :-------- | :------- |
| [4,3,4,5,5]| 3 |
| [2,1,2,3,4,2,3,4,1] | 2 |

#### Main Logic

```cpp
int oddOcurring(int array[],int number){
    int result=0;
    for(int count=0;count<number;count++){
        result=result^array[count];
    }return result;
}
```

**Time Complexity : O(n)**\
n:number of elements in array

[Complete Code Link](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/oddOcurring.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/images/question6.PNG)

### Question7
**Two Odd Ocurring Elements**

#### Example test cases
| Input(n) | Output     |
| :-------- | :------- |
| [4,3,4,5,5,2]| 3,2 |
| [20,13,12,13] | 20,12 |

#### Main Logic
We get the entire XOR and use the 1st bit of XOR to diffrentiate into 2 grps and find 2 numbers from XOR further.

```cpp
int oddOcurring(int array[],int number){
    int result=0;
    for(int count=0;count<number;count++){
        result=result^array[count];
    }return result;
}
```

**Time Complexity : O(n)**\
n:number of elements in array

[Complete Code Link](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/twoOddOcurring.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/dsa_BitManipulation/blob/main/images/question7.PNG)
