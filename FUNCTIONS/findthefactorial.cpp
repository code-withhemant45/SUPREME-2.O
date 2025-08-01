#include <iostream>
using namespace std;

int findfactorial(int n){
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact = fact * i;
        
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int result = findfactorial(n);
    cout<<"factorial of "<< n <<  "is" <<  result <<endl;
     return 0;


}