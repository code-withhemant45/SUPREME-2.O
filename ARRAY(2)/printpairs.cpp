#include <iostream>
using namespace std;

int  Printpairs( int arr[], int size){

   

    for ( int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){

            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
           
        }
    }
    return 0;
     
}
 



int main(){

    int arr[4] = { 10 ,20 , 30, 40};
    int size = 4;

    Printpairs( arr , size);


       
}