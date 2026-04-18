#include<bits/stdc++.h>
using namespace std;
bool linearsearch(char key, stirng str){
    for(int i = 0; i<str.length(), i++){
        if(str[i]==key){
           return true;
        }
    }
    return false;
}
 string removeduplicate(string str){
        string res="";
        for( int i = 0; i<str.length(); i++){
            if(!linearsearch(str[i],res)){
                res =rs+str[i];
            
            }
        }
        return res;
 }
int main(){
    string str="prajjal";
    cout<<removeduplicate(str);

}