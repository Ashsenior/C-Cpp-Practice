#include <iostream>
using namespace std;

class simple{
    public:
        void sum(int a, int b){
            cout<<" Sum : "<<a+b<<endl;
        }
        void product(int a, int b){
            cout<<" Product : "<<a*b<<endl;
        }
        void divide(int a, int b){
            cout<<" Division : "<<(float) a/b <<endl;
        }
        void subtract(int a, int b){
            cout<<" Difference : "<<a-b<<endl;
        }
};

class scientific{
    public: 
        void pow(int a,int b){
            if (b>0){
                int ab = 1;
                for (int i=0;i<b;i++){
                    ab = ab*a;    
                }
                cout<<" b to the power of a : "<<ab<<endl;
            }
            else if(b==0){
                cout<<" b to the power of a : "<<1<<endl;
            }
            else{
                b = -(b);
                int ab = 1;
                for (int i=0;i<b;i++){
                    ab = ab*a;    
                }
                cout<<" b to the power of a : "<<(float) 1/ab<<endl;
            }
        }
        void mod(int n){
            if (n<0){
                cout<<" Mod of n : "<<-(n)<<endl;
            }
            else {
                cout<<" Mod of n : "<<n<<endl;
            }
        }
};

class hybridcalc : public simple, public scientific{
    protected:
        int a,b;
    public:
        void getab(int k, int l){
            a = k;
            b = l;
        }
        void showall(void){
            sum(a,b);
            product(a,b);
            divide(a,b);
            subtract(a,b);
            pow(a,b);
            mod(a);
            mod(b);
        }
};

int main(){
    hybridcalc a;
    a.getab(2,-5);
    a.showall();
    return 0;
}