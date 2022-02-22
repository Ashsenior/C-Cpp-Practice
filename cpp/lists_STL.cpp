#include <iostream>
#include <list>
using namespace std;

void input(int a,list<int> &l){
    for (int i=0;i<a;i++){
        int n;
        cin>>n;
        l.push_back(n);
    }
}

void display(list<int> &l){
    for (list<int> :: iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
}

int main(){
    list<int> l;
    list<int> :: iterator iter = l.begin();
    input(5,l);
    l.sort();
    display(l);
    return 0;
}