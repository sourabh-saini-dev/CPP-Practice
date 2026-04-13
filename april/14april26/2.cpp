#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the value of string";
    getiline(cin,s);

    int count = 0;
    for(int i = 0; i<s.lenggth(); i++){
        if(s[i]==' '){
            count++;
        }
    }
    cout<<"number of spaces "<<count;
}