#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int temp = n;
    int sum =0;
    int last;
    while(temp){
        last = temp%10;
        sum = sum+last*last*last;
        temp/=10;
        
    }
    if(n==sum){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}