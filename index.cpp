#include <iostream>
#include <string>
#include <tuple>

using namespace std;

// Entry point into program
// int main() {
//     cout << "Hello World!" << "Tim" << endl;
//     return 0;
// }

// Variable declaration
// int main() {
//     int x = 456;
//     string max = "max is my name";
//     cout << max << endl;
// }

// Constant Variables
// int main() {
//     const float gravity = -9.8;
//     cout << gravity << endl;
// }

// cin failure and clear function
// int main() {
//     int n, x;
//     cin >> n;
//     cout << n << endl;
//     cin.clear();
//     cin.ignore(1000, '\n');
//     cin >> x;
//     cout << x << endl;
// }

// Simple calculator
// int main() {
//     int num1, num2;
//     cout << "Enter a Number: ";
//     cin >> num1;
//     cin.clear();
//     cin.ignore(1000, '\n');
//     cout << "Enter a Second Number: ";
//     cin >> num2;
//     cin.clear();
//     cin.ignore(1000, '\n');
//     int sum = num1 + num2;
//     cout << "The sum is: " << sum << endl;
// }

// Return a string
// int main() {
//     string s;
//     cin >> s;
//     cout << s << endl;
// }

// Math operators
// int main() {
//     float x = 8;
//     float y = 9;
//     float mult = x*y;
//     cout << mult << endl;
// }

// Comparison operators
// int main() {
//     int num1, num2;
//     cout << "Type a number: ";
//     cin >> num1;
//     cout << "Type a number: ";
//     cin >> num2;
//     cout << "These two nubmers are the same: " << (num1==num2) << endl;
// }

// Logical operators
// int main() {
//     bool x = !(1 < 2);
//     cout << x << endl;
// }

// If, ELSE, ELSE IF
// int main() {
//     int x = 8;
//     if (x > 10) {
//         cout << "More then 8";
//     } else {
//         cout << "you trash!";
//     }
// }

//Arrays
// int main() {
//     int x = 5;
//     int arr[] = {1,2,3,4,5};
//     cout << arr[4] << endl;
// }

// For Loops
// int main() {
//     int arr[] = {10,20,30,40,50,60};
//     int arrLen = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < arrLen; i++) {
//         cout << arr[i] << endl;
//     }
// }

// int main() {
//     int arr[5];
//     int arrLen = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < arrLen; i++) {
//         arr[i] = 999;
//         cout << arr[i] << endl;
//     }
// }

// While Loops
// int main() {
//     int input;
//     while (input != 1 && input != 2) {
//         cout << "Type the number 1 or 2: ";
//         cin >> input;
//     }
// }

// Do while loop
// int main() {
//     int x = 10;
//     do {
//         int add;
//         cout << "Type a number to add to x: ";
//         cin >> add; 
//         x += add;
//         cout << "x is: " << x << endl;
//     } while (x < 10);
// }

// Switch statements
// int main() {
//     int x = 1;
//     switch (x+1) {
//         case 1:
//             cout << "cool";
//             break;
//         case 2:
//             cout << "not cool";
//             break;
//         default:
//             cout << "anyhting";
//     }
// }

// Strings
// int main() {
//     string str = "hello world!";
//     for (int i = 0; i < str.length(); i++) {
//         char chr = str[i];
//         cout << chr << endl;
//     }
// }

// References
// int main() {
//     int a = 2;
//     int &b = a;
//     cout << b << endl;
// }

// Pointers
// int main() {
//     int x[] = {1,2,3};
//     int len = sizeof(x)/sizeof(x[0]);
//     int *head = x;
//     for (int i = 0; i < len; i++) {
//         head = x + i;
//         cout << *head << endl;
//     }
// }

// Tuples
int main() {
    tuple <int,string> person(20,"Bob");
    cout << get<0>(person) << endl;
}