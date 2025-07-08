#include <iostream>
using namespace std;

float areaofcircle(float radius){
    float area = 3.14 * radius * radius;
    return area;
}
int main(){
    float radius;
    cin >> radius;
    float area = areaofcircle(radius);
    cout<< "area of circle is:"<< area << endl;
    return 0;
}