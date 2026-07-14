   //   duplicate array
#include <iostream>
 using namespace std;
  bool   duplicate( int arr[],int n){
        for(int i  = 0; i<n; i++){
         for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
              return true;
            }
         }
        }
        return false;
     }

int main()
{ 
    int arr []= {1,1,3,4,5};
    int n = 5;
        cout<<duplicate(arr,n);

    return 0;
} 