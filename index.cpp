#include <iostream>
#include <string>
#include <tuple>
#include <map>
#include <vector>
#include <set>

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
// int main() {
//     tuple <int, string> person(20, "bob");
//     cout << get<1>(person) << endl;

//     tuple <char, int> thing;
//     thing = make_tuple('h', 56);
//     cout << get<1>(thing) << endl;
// }

// Maps
// int main() {
//     map <char, int> mp = {
//         {'T', 7},
//         {'S', 8},
//         {'a', 4}
//     };
//     mp['u'] = 9;
//     pair <char,int> p1('j', 5);
//     mp.insert(p1);
//     cout << mp.size() << endl;

//     for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
//         cout << itr->first << endl;
//         cout << (*itr).second << endl;
//     }
// }

// Simple map usecase
// int main() {
//     string test = "Hello world my name is bob! bbblaaahhhh";
//     map <char, int> mp;
//     for (int i = 0; i < test.length(); i++) {
//         char letter = test[i];
//         if (mp.find(letter) == mp.end()) {
//             mp[letter] = 1;
//         } else {
//             mp[letter] += 1;
//         }
//     }
//     for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
//         cout << itr->first << ": " << itr->second << endl;
//     }
// }

// Vectors
// int main() {
//     vector<int> v1 = {1,2,3};
//     v1.push_back(9);
//     v1.pop_back();
//     v1.erase(v1.begin());

//     for (int i = 0; i < v1.size(); ++i) {
//         cout << v1[i] << endl;
//     }

//     for (auto itr = v1.begin(); itr != v1.end(); ++i) {
//         cout << *itr << endl;
//     }
// }

// Sets
// int main() {
//     set<char> s1 = {'c', 'd', 'a', 'd', 'c'};
//     s1.erase('c');
//     s1.insert('z');

//     for (auto itr = s1.begin(); itr != s1.end(); ++itr) {
//         cout << *itr << endl;
//     }

// }

// Looping through sets
//  int main() {
//     string test = "This is a test iii jj j hgahs";
//     string find = "hello";
//     set <char> exists;

//     for (int i = 0; i < test.length(); ++i) {
//         char letter = test[i];
//         exists.insert(letter);
//     }

//     for (auto itr = exists.begin(); itr != exists.end(); ++itr){
//         cout << *itr << endl;
//     }
// }

// Set usecase
//  int main() {
//     string test = "This is a test iii jj j hgahs";
//     string find = "hello";
//     set <char> findLetters;

//     for (int i = 0; i < find.length(); ++i) {
//         char letter = find[i];
//         findLetters.insert(letter);
//     }

//     for (int i = 0; i < test.length(); ++i) {
//         char letter = test[i];
//         findLetters.erase(letter);
//     }
//     if (findLetters.size() > 0) {
//         cout << "NO! It does not have all letters in the word." << endl;
//     } else {
//         cout << "Yes! It does contain all the letters!" << endl;
//     }
// }

// Functions
int add(int x, int y) {
    return x + y;
}

int main() {
    cout << add(2,3) << endl;
    cout << add(7,3) << endl;
}