#include <iostream>
#include <limits.h>
using namespace std;


int Printminans( int arr[], int size ){
    int Minans = INT_MAX;
    for(int i = 0 ; i < size ; i++){

        if ( arr[i] < Minans){

             Minans = arr[i];
        }
    }

    return Minans;
}
int main(){

    int arr[9]= { 12,6,10,11,34,22,2,45,67};
    int size = 9;

    int minimum = Printminans(arr , size);
    cout << " Mminimum element is:"<< minimum << endl;
}