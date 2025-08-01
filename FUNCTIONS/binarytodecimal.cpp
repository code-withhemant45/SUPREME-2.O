#include<iostream>
#include<cmath>
using namespace std;

int binarytodecimal(int n){
    int decimal =0;
    int i = 0;
    
    while(n){
        int digit = n%10;
        decimal = digit * pow(2,i++) + decimal;
        n = n / 10;
    }
    return decimal;
}
int main(){
     int n;
     cin>>n;
     int decimal = binarytodecimal(n);
     cout<< decimal<< endl;

     return 0;
}
