
#include <iostream>

int main()
{
    std::cout << "Hello World!\n" << "This is khotso Mokhethi\n";
    int numberOne = 1;
    int numberTwo = 2;
   // AddingNumber(numberOne, numberTwo);
    int x, y;
    int sum;
    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Type another number: ";
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum is: " << sum;
}

int AddingNumber(int numberOne, int numberTwo) {

    int returnedNumber = numberOne + numberTwo;
    return returnedNumber;
}

