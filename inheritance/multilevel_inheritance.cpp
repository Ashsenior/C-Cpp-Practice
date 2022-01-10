#include <iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void get_roll(void){
            cout<<" Roll no is : "<<roll_no<<endl;
        }
        void set_roll(int n){
            roll_no = n;
        }
};

class exam : public student{
    protected:
        int p,c,m;
    public:
        void set_marks(int x,int y,int z){
            p = x;
            c = y;
            m = z;
        }   
        void get_marks(void){
            cout<<" Physics marks : "<<p<<endl;
            cout<<" Chemistry marks : "<<c<<endl;
            cout<<" Maths marks : "<<m<<endl;
        }
};

class result : public exam{
    float per;
    public:
        void display(void){
            get_roll();
            get_marks();
            cout<<" Percentage is : "<<((m+p+c)/3)<<endl;
        }
};

int main(){
    result res;
    res.set_roll(12);
    res.set_marks(98,95,93);
    res.display();
    return 0;
}