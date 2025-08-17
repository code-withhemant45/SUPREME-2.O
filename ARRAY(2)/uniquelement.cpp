#include <iostream>
using namespace std;

int Printuniqueelement( int arr[],  int size){


    int ans = 0;
    for ( int i = 0 ; i < size ; i++){

        ans = ans ^ arr[i] ;

        
    }

    return ans;

}

int main(){


    int arr[9] = { 2,5,6,7,2,5,6,8,8};

    int size = 9;

    int Ans = Printuniqueelement(arr , size);

    cout <<" Unique element :" << Ans << endl;




}