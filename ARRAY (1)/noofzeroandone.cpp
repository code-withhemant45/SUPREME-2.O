#include <iostream>
using namespace std;

void Noofzeros(int arr[], int size) {
   int  count1 = 0; // reset before counting
    int count0 = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            count1++;
        } else if (arr[i] == 0) {
            count0++;
        }
    }
    cout<< " No of one's"<< count1 << endl;
    cout << " No of zeros's "<< count0 << endl;
}

int main() {
    int arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1};
    int size = 9;
    Noofzeros( arr,  size); // function call
    

}
