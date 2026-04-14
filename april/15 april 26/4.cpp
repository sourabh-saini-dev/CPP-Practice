// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of number";
    cin>>n;
    vector<int>ans;
    while(n){
        int digit= n%10;
        ans.push_back(digit);
         n/=10;
    }
    int sum = 0;
    for(int i = 0; i<ans.size(); i++){
       sum = sum*10+ans[i];
       
    }
    cout<<"number of reverse nubmer"<<sum;
 
    return 0;
}