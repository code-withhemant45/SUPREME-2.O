#include <iostream>
using namespace std;

 bool Linearsearch( int arr[], int size , int target ){

    for ( int i = 0 ; i< size; i++){

        if (arr[i] == target){
            return true;
        }
        
    }
    return false;
 }
int main(){

    int arr[5]= { 2,3,4,5,10};
    int size= 5;
    int target = 10;

    bool ans = Linearsearch( arr, size ,target );
    
          if (ans == true ){
            cout<<" Target found"<< endl;
          }
          else{
            cout <<" Target not found"<< endl;
          }
        

}

   

    




   
