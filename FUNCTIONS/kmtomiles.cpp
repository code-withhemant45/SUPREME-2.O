#include<iostream>
#include<cmath>
using namespace std;

float kmtomiles(float km){

float _1kmmiles = 0.621371;
float miles = km * 0.621371;
return miles;


}
    

int main(){
    float km;
    cout<<"Tell me km:"<< endl;
    cin >> km;

    float miles = kmtomiles(km);
    cout<<"miles = "<< miles<< endl;
    return 0;

}