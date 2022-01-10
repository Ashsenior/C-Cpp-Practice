#include <iostream>
using namespace std;

int main(){

    int *a = new int(7); // dynamically creating an int var named a using pointer and new keyword 
    cout<<*a;
    int *arr = new int[3]; // dynammically creating an array using pointers and 'new' keyword 
    for (int i=0;i<3;i++){
        arr[i] = i*2;
        cout<<arr[i]<<endl;
    }
    delete[] arr; // for deleting memory allocated by the array
    for (int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}