#include <iostream>
using namespace std;

int main(){
    
    int arr[10];
    int n = 10 ;

    for(int i = 0 ; i<n; i++){
        cout << " Enter the index :"<< i << " ";
        cin >> arr [i];
        cout<< endl;

    }
    cout << " print the array:" ;
    for (int i=0; i<n; i++){

        cout << 2 * arr[i]<< "  " ;
    }

}
     
    

