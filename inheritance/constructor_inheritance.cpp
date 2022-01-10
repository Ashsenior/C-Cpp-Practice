#include <iostream>
using namespace std;

class base1{
    int val1;
    public:
        base1(int n){
            val1 = n;
            cout<<" Base1 called "<<endl;
        }
};

class base2{
    int val1;
    public:
        base2(int n){
            val1 = n;
            cout<<" Base2 called "<<endl;
        }
};

class derived : public base1, public base2{
    int val3,val4;
    public:
        derived(int a, int b, int c, int d):val3(a) , val4(b) ,base1(a), base2(b){
            cout<<" Derived called "<<endl;
        }
};

int main(){
    derived der(1,3,5,7);
    
    return 0;
}