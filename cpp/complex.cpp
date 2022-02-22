#include <iostream>
using namespace std;

class complex{
    int real,img;
    public:
        complex(void){}
        complex(int a,int b): real(a),img(b){
            cout<<" constructor called"<<endl;
        }
        void getdata(void){
            cout<<" Real value : "<<real<<endl;
            cout<<" Imaginary value : "<<img<<endl;
        }
};

int main(){
    complex *c = new complex[3];
    c->getdata();
    return 0;
}