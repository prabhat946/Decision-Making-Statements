//Name:prabhat
//PRN:23070123040
//Aim:Implemention of Decision Making Statements to Check the largert number in given numbers

#include <iostream>
using namespace std;

int main() { int a,b,c;
  
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    
    if (a>b) { 
        if (a>c)
        { cout << a << " is the largest number.";}
        else
        {cout << c << " is the largest number.";}
    }
    else {
        if (b>c)
        { cout << b << " is the largest number.";}
        else
         {cout << c << " is the largest number.";}
    }
    
    return 0;
}


/*Output:
Enter number 1: 2
Enter number 2: 3
Enter number 3: 6
6 is the largest number.*/