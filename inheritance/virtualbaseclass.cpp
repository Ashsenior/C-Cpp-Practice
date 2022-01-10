#include <iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        student(int n){
            roll_no = n;
        }
        void get_roll(void){
            cout<<" Your roll no : "<<roll_no<<endl;
        }
};

class exam : virtual public student{
    protected:
        int p,m;
    public:
        exam(int n,int a,int b): student(n){
            p = a;
            m = b;
        }
        void get_marks(void){
            cout<<" Physics : "<<p<<endl;
            cout<<" Maths : "<<m<<endl; 
        }
};

class sports : virtual public student{
    protected:
        int score;
    public:
        sports(int n,int a): student(n){
            score = a;
        }
        void get_score(void){
            cout<<" PT Score : "<<score<<endl;
        }
};

class result : public exam, public sports{
    protected:
        int total=0;
    public:
        result(int a,int k, int c,int e,int p): exam(k,a,p) ,sports(k,e) ,student(k){
            total = p+score+m;
        }
        void display(void){
            get_roll();
            get_marks();
            get_score();
            cout<<" Total score is : "<<total<<endl;
        }
};

int main(){
    result ash(7,5,9,4,3);
    ash.display();
    return 0;
}