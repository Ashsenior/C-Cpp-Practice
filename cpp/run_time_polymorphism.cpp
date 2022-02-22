#include <iostream>
#include <cstring>

using namespace std;

class channel{
    protected:
        string title;
        float rating;
    public:
        channel(string t,float r):title(t),rating(r){}
        virtual void display(void){}
};

class video : public channel{
    int vlen;
    public:
        video(string t, float r,int vl):channel(t,r),vlen(vl) {}
        void display(void){
            cout<<" Video title : "<<title<<endl;
            cout<<" Video length(min) : "<<vlen<<endl;
            cout<<" Video rating : "<<rating<<endl;
        }
};

class blog : public channel{
    int blen;
    public:
        blog(string t, float r,int bl):channel(t,r),blen(bl) {}
        void display(void){
            cout<<" blog title : "<<title<<endl;
            cout<<" blog length(words) : "<<blen<<endl;
            cout<<" blog rating : "<<rating<<endl;
        }
};

int main(){
    video *ptrv = new video("hello world",4.5,5);
    ptrv->display();

    blog *ptrb = new blog("new world",3.9,340);
    ptrb->display();
    return 0;
}