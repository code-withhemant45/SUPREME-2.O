#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinarymethod1(int n){
    int binaryno = 0;
        int i = 0;

    while(n>0){
       

        int digit=n & 1;  //bitwise method
        binaryno = digit * pow(10,i++) + binaryno;
        n=n >> 1;
    }
    return binaryno;
}


    int main(){

        int n ;
        cin >> n;
        int binary = decimaltobinarymethod1(n);
            cout << binary << endl;
        
       
    }


