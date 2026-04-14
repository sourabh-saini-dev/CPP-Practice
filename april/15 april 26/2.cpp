#include<iostream>
using namespace std;
int main(){
    string s="1234";

    vector<int>ans;

    for(int i= 0; i<s.size(); i++){
        int digit = s[i]-'0';
        ans.push_back(digit*digit);
    }
    for(int i= 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}