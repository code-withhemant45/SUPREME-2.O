#include <iostream>
using namespace std;


void sortzerosandones( int arr[], int size){

    int zerocount = 0;
    int onecount = 0;

    for (int i = 0 ; i < size; i++){

        if( arr[i]==0){
            zerocount++;
        }
        if(arr[i] == 1){
            onecount++;
        }
    }
   int i;
   for( i = 0 ; i < zerocount; i++){
    arr[i]=0 ;
   }
   for(int j = i ; j < size; j++){
    arr[j] = 1;
   }

}

int main(){

    int arr[] = { 0,1,0,0,1,1,0,1,0,0,1};

    int size = 11;

    sortzerosandones( arr, size);

    for(int i =0 ; i <size; i++){
        cout<< arr[i] << " ";
    }


}