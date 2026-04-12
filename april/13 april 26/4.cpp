#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the value of string";
    getline(cin,s);
    
    string str="";
    for(auto ch:s){
        if(ch!=' '){
            str = str+ch;
        }
        else{
            cout<<str<<"\n";
            str=";
        }
    }
        cout<<str;
}