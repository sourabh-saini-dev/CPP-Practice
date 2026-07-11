#include <iostream>
using namespace std;

string reverseString(string n) {
    int i = 0;
    int j = n.length() - 1;

    while (i < j) {
        swap(n[i], n[j]);
        i++;
        j--;
    }

    return n;
}


int main() {
    string n;

    cout << "Enter the string now: ";
    cin >> n;

    cout << reverseString(n);

    return 0;
}