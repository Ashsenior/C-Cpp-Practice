#include <iostream>
using namespace std;

class base{
    int data1 ;
    public:
    int data2;
        base(int n, int k){
            data1 = n;
            data2 = k;
        }
        int getdata1(void){
            return data1;
        }
        int getdata2(void){
            return data2;
        }
};

class derived : public base{
    int data3;
    public:
        void process(void){
            data3 = data2 + getdata1;
        }
        void display(void){
            cout<<"Value of data1 is : "<<getdata1();
            cout<<"Value of data2 is : "<<data1;
            cout<<"Value of data3 is : "<<data2;
        }
};

int main(){
    derived der(7,5);
    return 0;
}