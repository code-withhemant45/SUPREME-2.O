#include<iostream>
#include<cmath>
using namespace std;

int digitstonumbers( int noofdigits){

int num = 0;

for(int i=0 ; i<noofdigits; i++){
    cout<< "Enter digit:"<< endl;
    int digit;
    cin >> digit;
    num = num *10 + digit;
    cout <<"Number created till now:"<< num << endl;
}
    return num;
}
int main(){
    
    int noofdigits;
    cin>> noofdigits;

    int num = digitstonumbers(noofdigits);
    cout<<"Number created by digits:"<< num<< endl;


}