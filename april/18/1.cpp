#include<iostream>
using namespace std;
bool linearsearch(char key, stirng str){
    for( int i = 0; i<str.length(); i++){
        if(str[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    string str="Prajjal";
    char key='p';
    if(linearsearch(char,key)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}