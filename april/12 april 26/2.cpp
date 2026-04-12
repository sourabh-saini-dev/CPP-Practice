#include <iostream>
using namespace std;

bool isPerfect(int num) {
    if (num <= 1) return false;

    int sum = 1; // 1 har number ka divisor hota hai

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPerfect(n)) {
        cout << "Perfect Number";
    } else {
        cout << "Not Perfect Number";
    }

    return 0;
}