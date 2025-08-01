#include<iostream>

using namespace std;

int countallsetbits(int n){
    int count = 0;

    while(n>0){
        int digit = n % 2;   // n & 1 (bitwise method)
        if(digit==1)
            count++;
            n=n/2;  // n = n>>1;
    }
    return count;
}
int main(){
    int n ;
    cin >> n;

    int countbits = countallsetbits(n);
    cout<< countbits << endl;
    return 0;

}