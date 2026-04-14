#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of number";
    cin>>n;
    vector<int> ans;
    while(n){
        int digit= n%10;
        ans.push_back(digit*digit);
        n/=10;
    }
   for(int i = 0; i<ans.size(); i++){
    cout<<ans[i]<<" "
   }
   
}
;