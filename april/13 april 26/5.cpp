#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of number";
    cin>>n;
     int sum = 0;
     int last;
     int temp = n;
     while(temp){
        last = temp%10;
        sum = sum*10+last;
        temp/=10;
     }
     if(n==sum){
        cout<<"pallindrame";
     }
     else{
        cout<<"not pallindrame";
     }
}