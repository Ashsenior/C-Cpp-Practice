#include <iostream>
using namespace std;

template <class T1=int,class T2=char,class T3=float>
class multi_vec{
    public:
        T1 data1;
        T2 data2;
        T3 data3;
        int size;
        multi_vec(T1 a,T2 b,T3 c){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void display(void){
            cout<<data1<<endl<<data2<<endl<<data3;
        }
};
template<class T>
void swapp(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
T average(T a,T b){
    T avg;
    avg = (a + b)/2;
    return avg;
}

int main(){
    //multi_vec<float ,int,char> a(2.4,4,'a');
    //a.display();
    char a='a',b='b';
    swapp(a,b);
    cout<<a<<endl<<b;
    return 0;
}