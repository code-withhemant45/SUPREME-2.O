#include <iostream>
using namespace std;

// bool checkprime(int n){
//     int i =2;
//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
    
// }
// int main(){
//     int n;
//     cin >> n;
//     bool prime  = checkprime(n);
//     if(prime){
//         cout << "PRIME NUMBER" << endl;
//     }
//     else{
//         cout << "not prime" << endl;
//     }
//     return 0;
//
// for 1 to N prime numbers
bool checkprime(int n){
    int i =2;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
    
}
int main(){
    int n;
    cin >> n;
    for(int i = 2; i<=n; i++){
        bool isiprime = checkprime(i);
        if(isiprime){
            cout<<i<<" ";
        }
    }
    
}