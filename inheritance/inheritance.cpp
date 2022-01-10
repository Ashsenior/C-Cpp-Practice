#include <iostream>
using namespace std;

class base{
    int data1 ;
    public:
        int data2;
        void setdata(int n, int k){
            data1 = n;
            data2 = k;
        }
        int getdata1(void){
            return data1;
        }
    protected:
        int getdata2(void){
            return data2;
        }
};

class derived : public base{
    int data3;
    public:
        void process(void){
            setdata(5,6);
            data3 = data2 + getdata1();
        }
        void display(void){
            cout<<"Value of data1 is : "<<getdata1()<<endl;
            cout<<"Value of data2 is : "<<data2<<endl;
            cout<<"Value of data3 is : "<<data3<<endl;
        }
};

int main(){
    derived der;
    der.process();
    der.display();
    return 0;
}