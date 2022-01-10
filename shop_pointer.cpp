#include <iostream>
using namespace std;

class item{
    int id,price;
    public:
        void setdata(int a,int b){
            id = a;
            price = b;
        }
        void getdata(void){
            cout<<" id of item is : "<<id<<endl;
            cout<<" price of item is : "<<price<<endl;
        }
};

int main(){
    item *ptr = new item[3];
    item *tempptr = ptr;
    int p,q;
    for (int i=0;i<3;i++){
        cout<<" Enter id and price of item : ";
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int j=0;j<3;j++){
        tempptr->getdata();
        tempptr++;
    }
    return 0;
}