//Name:prabhat
//PRN:23070123040
//Aim:Implemention of Decision Making Statements to Check if the given number is Even or Odd

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The given number is an even number." << endl;
    } else {
        cout << "The given number is an odd number." << endl;
    }

    return 0;
}


/*Output:
For Even Number-
Enter an number: 6
The given number is an even number.

For Odd Number-
Enter an number: 5
The given number is an odd number.*/
