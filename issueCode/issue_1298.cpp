#include <iostream>

using namespace std;

void printNumber() {
        int number1 __attribute__((unused)) = 1;
        int number2 __attribute__((unused));
        cout<<"Number: " << number1;
}

int main() {
        cout<<"\nHello World!\n";
        printNumber();
        return 0;
}


/*
Found 1 issue

issue_1298.cpp:8: error: UNINITIALIZED_VALUE
  The value read from number1 was never initialized.
  6.           int number1 __attribute__((unused)) = 1;
  7.           int number2 __attribute__((unused));
  8. >         cout<<"Number: " << number1;
  9.   }
  10.   
*/