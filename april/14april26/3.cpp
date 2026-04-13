#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the value of number";
    cin >> n;

    int i = 1;
    while(i*i <= n){
        if(i*i == n){
            cout << i << " ";
        }
        i++;
    }

    cout << " square of number " << n;
}