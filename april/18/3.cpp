// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool linearsearch(char key, string str){
      for(auto ch: str){
        if(ch==key){
            return true;
        }
    }
    return false;
    
}
     string removevowels(string str){
         string vowels="a,e,i,o,u,A,E,I,O,U";
         string res="";
         for(auto ch: str){
             if(!linearsearch(ch,vowels)){
                res = res+ch;
             }
         }
         return res;
     }

int main() {
    string str="prajjal";
    cout<<removevowels(str);
   

    return 0;
}