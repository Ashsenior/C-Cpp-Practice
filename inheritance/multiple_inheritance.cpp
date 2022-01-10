#include <iostream>
using namespace std;

class base2{
    protected:
        int base2int;
    public:
        void set_base2(int n){
            base2int = n;
        }
};

class base3{
    protected:
        int base3int;
    public:
        void set_base3(int n){
            base3int = n;
        }
};

class base1{
    protected:
        int base1int;
    public:
        void set_base1(int n){
            base1int = n;
        }
};

class derived : public base1, public base2, public base3{
    public:
        void display(void){
            cout<<" Base 1 : "<<base1int<<endl;
            cout<<" Base 2 : "<<base2int<<endl;
            cout<<" Base 3 : "<<base3int<<endl;
            cout<<" Sum : "<<base1int+base2int+base3int<<endl;
        }
};

int main(){

    derived der;
    der.set_base1(5);
    der.set_base2(7);
    der.set_base3(12);
    der.display();
    return 0;
}