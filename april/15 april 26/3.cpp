#include<iostream>
using namespace std;
int main(){
    int n="1234";

    string str= to_string(n);

    vector<int>ans;

    for(int i= 0; i<str.size(); i++){
        int digit = str[i]-'0';
        ans.push_back(digit*digit);
    }
    for(int i= 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}