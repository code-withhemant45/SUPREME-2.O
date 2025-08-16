#include <iostream>
using namespace std;


void Printarray(int arr[], int size){

    for( int i=0; i < size; i++){

        cout<< arr[i] << " ";
    }
}
int main(){
     int arr[5] = { 2,3,5,6,10};
     int size = 5;

     Printarray( arr, size);
}