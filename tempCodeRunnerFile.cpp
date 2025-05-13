#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false; // Step 2

    int original = x; // Step 3
    int rev = 0;

    while (x != 0) {  // Step 4
        int digit = x % 10; //here reminder is save in the digit
        rev = rev * 10 + digit;//use of the that digit in the rev 
        x = x / 10;//update the x value
    }

     return (original == rev) ? true :false;// Step 5
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
