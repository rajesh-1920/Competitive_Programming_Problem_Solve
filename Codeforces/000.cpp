#include <iostream>
#include <string>
using namespace std;

// Function to check if a number consists only of '3' and '6'
bool hasOnlyThreeAndSix(int num) {
    string str = to_string(num);
    for (char ch : str) {
        if (ch != '3' && ch != '6') {
            return false;
        }
    }
    return true;
}

int main() {
    int num = 100000000;  // Start from the smallest 6-digit number

    cout<<(333336366%66);

    return 0;
}
